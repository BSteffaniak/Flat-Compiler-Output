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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
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
#include <nova/operators/nova_operators_Nova_Equals.h>

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


spectra_Spectra_Extension_VTable spectra_Spectra_Extension_VTable_val =
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
				0,
				0,
				0,
				0,
				0,
				0,
				0,
		},
		nova_Nova_Object_Nova_toString,
		nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
		nova_datastruct_list_Nova_Array* spectra_Nova_Spectra_Nova_files;
		
)

void spectra_Nova_Spectra_func_Nova_testClasses(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_Nova_Spectra_Nova_lambda96(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
char spectra_Nova_Spectra_Nova_lambda97(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
spectra_tree_nodes_Nova_NovaFile* spectra_Nova_Spectra_Nova_lambda98(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void spectra_Nova_Spectra_Nova_lambda99(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
nova_Nova_String* spectra_Nova_Spectra_Nova_lambda100(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
void spectra_Nova_Spectra_Nova_lambda101(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
void spectra_Nova_Spectra_Nova_lambda102(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
void spectra_Nova_Spectra_Nova_lambda103(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
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
		
		l1_Nova_directory = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(0, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))));
		if (spectra_Nova_Spectra_Nova_DEBUG)
		{
				nova_Nova_String* l1_Nova_target = (nova_Nova_String*)nova_null;
				nova_datastruct_list_Nova_ImmutableArray* l1_Nova_annotationTypes = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
				Context1 contextArg96 = 
				{
				};
				spectra_tree_nodes_Nova_Program* l1_Nova_program = (spectra_tree_nodes_Nova_Program*)nova_null;
				nova_io_Nova_File* l1_Nova_parentDir = (nova_io_Nova_File*)nova_null;
				nova_time_Nova_Timer* l1_Nova_parseTimer = (nova_time_Nova_Timer*)nova_null;
				nova_time_Nova_Timer* l1_Nova_outputTimer = (nova_time_Nova_Timer*)nova_null;
				nova_time_Nova_Timer* l1_Nova_compileTimer = (nova_time_Nova_Timer*)nova_null;
				nova_time_Nova_Timer* l1_Nova_fileTimer = (nova_time_Nova_Timer*)nova_null;
				Context2 contextArg97 = 
				{
				};
				Context3 contextArg98 = 
				{
				};
				Context6 contextArg101 = 
				{
				};
				Context7 contextArg102 = 
				{
				};
				Context8 contextArg103 = 
				{
				};
				
				spectra_Nova_Spectra_func_Nova_testClasses(this, exceptionData);
				l1_Nova_target = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("c"));
				l1_Nova_annotationTypes = (nova_datastruct_list_Nova_ImmutableArray*)(nova_datastruct_list_Nova_ImmutableArray_Nova_filter((nova_datastruct_list_Nova_ImmutableArray*)(nova_Nova_Class_Nova_ALL), exceptionData, (nova_datastruct_list_Nova_ImmutableArray_closure9_Nova_filterFunc)&spectra_Nova_Spectra_Nova_lambda96, this, &contextArg96));
				l1_Nova_program = spectra_tree_nodes_Nova_Program_Nova_construct(0, exceptionData, 0);
				l1_Nova_parentDir = nova_io_Nova_File_1_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_List_Nova_firstOr((nova_datastruct_list_Nova_List*)(args), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../../../tempstd"))), 0, 0, 0)));
				l1_Nova_parseTimer = nova_time_Nova_Timer_Nova_construct(0, exceptionData);
				l1_Nova_outputTimer = nova_time_Nova_Timer_Nova_construct(0, exceptionData);
				l1_Nova_compileTimer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
				l1_Nova_fileTimer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
				this->prv->spectra_Nova_Spectra_Nova_files = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_io_Nova_File_Nova_getChildFiles(l1_Nova_parentDir, exceptionData, 1, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&spectra_Nova_Spectra_Nova_lambda97, this, &contextArg97)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&spectra_Nova_Spectra_Nova_lambda98, this, &contextArg98));
				nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_fileTimer), exceptionData);
				TRY
				{
						novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, spectra_SyntaxErrorException_Extension_VTable_val.classInstance, 0);
						
						{
								Context4 contextArg99 = 
								{
										&l1_Nova_program,
								};
								spectra_tree_Nova_SyntaxTree* l2_Nova_tree = (spectra_tree_Nova_SyntaxTree*)nova_null;
								nova_Nova_String* l2_Nova_separator = (nova_Nova_String*)nova_null;
								Context5 contextArg100 = 
								{
										&l2_Nova_separator,
								};
								
								nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->spectra_Nova_Spectra_Nova_files), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&spectra_Nova_Spectra_Nova_lambda99, this, &contextArg99);
								l2_Nova_tree = spectra_tree_Nova_SyntaxTree_Nova_construct(0, exceptionData, this, l1_Nova_program);
								nova_time_Nova_Timer_Nova_start(l1_Nova_parseTimer, exceptionData);
								spectra_tree_Nova_SyntaxTree_Nova_formTree(l2_Nova_tree, exceptionData);
								spectra_tree_Nova_SyntaxTree_Nova_validateTypes(l2_Nova_tree, exceptionData);
								spectra_tree_Nova_SyntaxTree_Nova_parseStatements(l2_Nova_tree, exceptionData);
								nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_parseTimer), exceptionData);
								nova_time_Nova_Timer_Nova_start(l1_Nova_outputTimer, exceptionData);
								l2_Nova_separator = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("============================="));
								nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(l2_Nova_tree->spectra_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&spectra_Nova_Spectra_Nova_lambda100, this, &contextArg100)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
								nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_outputTimer), exceptionData);
						}
				}
				CATCH (spectra_SyntaxErrorException_Extension_VTable_val.classInstance)
				{
						spectra_Nova_SyntaxErrorException* l3_Nova_e = (spectra_Nova_SyntaxErrorException*)nova_null;
						
						l3_Nova_e = (spectra_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				}
				FINALLY
				{
				}
				END_TRY;
				nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_compileTimer), exceptionData);
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_Nova_Spectra_Nova_errors), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&spectra_Nova_Spectra_Nova_lambda101, this, &contextArg101);
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_Nova_Spectra_Nova_warnings), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&spectra_Nova_Spectra_Nova_lambda102, this, &contextArg102);
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_Nova_Spectra_Nova_info), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&spectra_Nova_Spectra_Nova_lambda103, this, &contextArg103);
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova file read time: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_fileTimer), exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova parse time: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_parseTimer), exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova result output time: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_outputTimer), exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova compile time: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_compileTimer), exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))));
				if (nova_Nova_System_Nova_overheadTimer->nova_time_Nova_CumulativeTimer_Nova_iterations > 0)
				{
						nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova overhead timer: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_CumulativeTimer_Accessorfunc_Nova_duration(nova_Nova_System_Nova_overheadTimer, exceptionData)))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms over "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_Nova_System_Nova_overheadTimer->nova_time_Nova_CumulativeTimer_Nova_iterations))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" iterations")))))));
				}
		}
}

void spectra_Nova_Spectra_func_Nova_testClasses(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_Nova_Spectra_Nova_lambda96(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
		return nova_Nova_Class_Nova_isOfType(_1, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance));
}

char spectra_Nova_Spectra_Nova_lambda97(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
		return nova_Nova_String_Nova_equals(nova_Nova_String_Nova_toLowerCase(nova_io_Nova_File_Accessorfunc_Nova_extension(_1, exceptionData), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova")));
}

spectra_tree_nodes_Nova_NovaFile* spectra_Nova_Spectra_Nova_lambda98(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
		return spectra_tree_nodes_Nova_NovaFile_Nova_construct(0, exceptionData, _1, 0, 0);
}

void spectra_Nova_Spectra_Nova_lambda99(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
		spectra_tree_nodes_Nova_Program_Nova_addChild((*context->spectra_Nova_Spectra_Nova_program), exceptionData, (spectra_tree_nodes_Nova_Node*)(_1));
}

nova_Nova_String* spectra_Nova_Spectra_Nova_lambda100(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((*context->spectra_Nova_Spectra_Nova_separator))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((file->spectra_tree_nodes_Nova_NovaFile_Nova_name)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((*context->spectra_Nova_Spectra_Nova_separator))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_util_Nova_CompilerStringFunctions_Nova_formatIndentation(spectra_tree_nodes_Nova_NovaFile_Nova_toNova(file, exceptionData), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
}

void spectra_Nova_Spectra_Nova_lambda101(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void spectra_Nova_Spectra_Nova_lambda102(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Warning: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void spectra_Nova_Spectra_Nova_lambda103(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Info: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
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



nova_primitive_Nova_Null* nova_null;
void* nova_garbageData;

int main(int argc, char** argvs)
{
		#ifdef _WIN32
		setProgramName(argvs[0]);
		//signal(SIGSEGV, nova_signal_handler);
		SetUnhandledExceptionFilter(nova_exception_handler);
		#endif
		nova_Nova_String** args;
		int      i;
		
		nova_exception_Nova_ExceptionData* exceptionData = 0;
		srand(currentTimeMillis());
		nova_garbageData = malloc(sizeof(void*));
		nova_gc_Nova_GC_static_Nova_init(0, exceptionData);
		
		nova_null = nova_primitive_Nova_Null_Nova_construct(0, exceptionData);
		novaEnv.nova_Object.toString = nova_Object_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_String.concat = nova_String_Extension_VTable_val.nova_Nova_String_virtual_Nova_concat;
		novaEnv.nova_String.substring = nova_String_Extension_VTable_val.nova_Nova_String_virtual_Nova_substring;
		novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Comparable_Extension_VTable_val.itable.nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo;
		novaEnv.nova_datastruct_HashMap.put = nova_datastruct_HashMap_Extension_VTable_val.nova_datastruct_Nova_HashMap_virtual_Nova_put;
		novaEnv.nova_datastruct_list_Array.addUnique = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_addUnique;
		novaEnv.nova_datastruct_list_Array.add__nova_Object = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual0_Nova_add;
		novaEnv.nova_datastruct_list_Array.add__nova_primitive_number_Int__nova_Object = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual1_Nova_add;
		novaEnv.nova_datastruct_list_Array.indexOf = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_indexOf;
		novaEnv.nova_datastruct_list_Array.cloneData = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_cloneData;
		novaEnv.nova_datastruct_list_Array.clone = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_clone;
		novaEnv.nova_datastruct_list_Array.get = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_get;
		novaEnv.nova_datastruct_list_Array.set = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_set;
		novaEnv.nova_datastruct_list_List.toArray = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray;
		novaEnv.nova_datastruct_list_List.contains__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains;
		novaEnv.nova_datastruct_list_List.forEach__void = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_List.map__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_List.any__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_any;
		novaEnv.nova_datastruct_list_List.all__nova_primitive_Bool__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_all;
		novaEnv.nova_datastruct_list_List.filter__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_List.take = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_take;
		novaEnv.nova_datastruct_list_List.skip = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_skip;
		novaEnv.nova_datastruct_list_List.firstWhere__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere;
		novaEnv.nova_datastruct_list_List.reverse = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
		novaEnv.nova_datastruct_list_List.join = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_join;
		novaEnv.nova_io_InputStream.readString = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readString;
		novaEnv.nova_io_InputStream.readBytes = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readBytes;
		novaEnv.nova_io_OutputStream.write = nova_io_OutputStream_Extension_VTable_val.nova_io_Nova_OutputStream_virtual_Nova_write;
		novaEnv.nova_math_Vector.dotProduct = nova_math_Vector_Extension_VTable_val.nova_math_Nova_Vector_virtual_Nova_dotProduct;
		novaEnv.nova_operators_Equals.equals__nova_Object = nova_operators_Equals_Extension_VTable_val.itable.nova_operators_Nova_Equals_virtual1_Nova_equals;
		novaEnv.nova_operators_Multiply.multiply__nova_Object = nova_operators_Multiply_Extension_VTable_val.itable.nova_operators_Nova_Multiply_virtual0_Nova_multiply;
		novaEnv.nova_thread_Thread.run = nova_thread_Thread_Extension_VTable_val.nova_thread_Nova_Thread_virtual_Nova_run;
		novaEnv.nova_time_Timer.stop = nova_time_Timer_Extension_VTable_val.nova_time_Nova_Timer_virtual_Nova_stop;
		novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_SvgComponent_Extension_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_No3Node_Extension_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.spectra_tree_nodes_Node.addChild = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_addChild;
		novaEnv.spectra_tree_nodes_Node.findVariableDeclaration = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration;
		novaEnv.spectra_tree_nodes_Node.parseStatement = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement;
		novaEnv.spectra_tree_nodes_Node.generateTemporaryScopeNode = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode;
		novaEnv.spectra_tree_nodes_Node.cloneTo = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo;
		novaEnv.spectra_tree_nodes_Node.replace = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_replace;
		novaEnv.spectra_tree_nodes_Node.validateTypes = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes;
		novaEnv.spectra_tree_nodes_Node.parsePlaceholders = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders;
		novaEnv.spectra_tree_nodes_Node.parsePlaceholderChildren = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren;
		novaEnv.spectra_tree_nodes_Node.writeAnnotationSeparator = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator;
		novaEnv.spectra_tree_nodes_Node.toNova = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_toNova;
		novaEnv.spectra_tree_nodes_Node.writeNova = spectra_tree_nodes_Node_Extension_VTable_val.spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova;
		novaEnv.spectra_tree_nodes_Value.parseType = spectra_tree_nodes_Value_Extension_VTable_val.spectra_tree_nodes_Nova_Value_virtual_Nova_parseType;
		novaEnv.spectra_tree_nodes_Value.writeType = spectra_tree_nodes_Value_Extension_VTable_val.spectra_tree_nodes_Nova_Value_virtual_Nova_writeType;
		novaEnv.spectra_tree_nodes_annotations_Annotatable.addAnnotation = spectra_tree_nodes_annotations_Annotatable_Extension_VTable_val.itable.spectra_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation;
		novaEnv.spectra_tree_nodes_functions_CallableFunction.parseParameter = spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.itable.spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter;
		novaEnv.spectra_tree_nodes_functions_CallableFunction.parseParameters = spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.itable.spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters;
		novaEnv.spectra_tree_nodes_functions_FunctionCall.writeName = spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val.spectra_tree_nodes_functions_Nova_FunctionCall_virtual_Nova_writeName;
		novaEnv.spectra_tree_nodes_functions_FunctionDeclaration.writeReturnType = spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.spectra_tree_nodes_functions_Nova_FunctionDeclaration_virtual_Nova_writeReturnType;
		novaEnv.spectra_tree_nodes_operations_Assignable.onAssigned = spectra_tree_nodes_operations_Assignable_Extension_VTable_val.itable.spectra_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned;
		novaEnv.spectra_tree_nodes_variables_VariableDeclaration.parseModifier = spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier;
		novaEnv.spectra_tree_nodes_variables_VariableDeclaration.writeModifiers = spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers;
		
		nova_Class_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Class")), 0);
		nova_Object_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Object")), 0);
		nova_String_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/String")), 0);
		nova_Substring_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Substring")), 0);
		nova_System_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/System")), 0);
		nova_ar_ImageTracker_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/ar/ImageTracker")), 0);
		nova_ar_TrackPoint_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/ar/TrackPoint")), 0);
		nova_database_DBConnector_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/database/DBConnector")), 0);
		nova_database_ResultSet_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/database/ResultSet")), 0);
		nova_datastruct_BinaryNode_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/BinaryNode")), 0);
		nova_datastruct_BinaryTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/BinaryTree")), 0);
		nova_datastruct_Bounds_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Bounds")), 0);
		nova_datastruct_Comparable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Comparable")), 1);
		nova_datastruct_HashMap_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/HashMap")), 0);
		nova_datastruct_HashSet_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/HashSet")), 0);
		nova_datastruct_ImmutableHashMap_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/ImmutableHashMap")), 0);
		nova_datastruct_Node_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Node")), 0);
		nova_datastruct_Pair_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Pair")), 0);
		nova_datastruct_ReversibleHashMap_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/ReversibleHashMap")), 0);
		nova_datastruct_Tree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Tree")), 0);
		nova_datastruct_Tuple_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Tuple")), 0);
		nova_datastruct_Tuple2_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Tuple2")), 0);
		nova_datastruct_list_Array_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Array")), 0);
		nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ArrayIterator")), 0);
		nova_datastruct_list_CharArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CharArray")), 0);
		nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CharArrayIterator")), 0);
		nova_datastruct_list_CompiledList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CompiledList")), 0);
		nova_datastruct_list_DoubleArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/DoubleArray")), 0);
		nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/DoubleArrayIterator")), 0);
		nova_datastruct_list_EmptyStackException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/EmptyStackException")), 0);
		nova_datastruct_list_ImmutableArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ImmutableArray")), 0);
		nova_datastruct_list_ImmutableArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ImmutableArrayIterator")), 0);
		nova_datastruct_list_ImmutableCharArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ImmutableCharArray")), 0);
		nova_datastruct_list_ImmutableCharArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ImmutableCharArrayIterator")), 0);
		nova_datastruct_list_IntArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntArray")), 0);
		nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntArrayIterator")), 0);
		nova_datastruct_list_IntRange_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntRange")), 0);
		nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntRangeIterator")), 0);
		nova_datastruct_list_Iterable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Iterable")), 1);
		nova_datastruct_list_Iterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Iterator")), 1);
		nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/LinkedList")), 0);
		nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/LinkedListIterator")), 0);
		nova_datastruct_list_List_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/List")), 1);
		nova_datastruct_list_ListNode_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ListNode")), 0);
		nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/NoSuchElementException")), 0);
		nova_datastruct_list_Queue_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Queue")), 0);
		nova_datastruct_list_Stack_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Stack")), 0);
		nova_datastruct_list_StringCharArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/StringCharArray")), 0);
		nova_datastruct_list_SubstringCharArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/SubstringCharArray")), 0);
		nova_exception_Backtraces_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Backtraces")), 0);
		nova_exception_CaughtException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/CaughtException")), 0);
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/DivideByZeroException")), 0);
		nova_exception_Exception_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Exception")), 0);
		nova_exception_ExceptionData_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/ExceptionData")), 0);
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/InvalidArgumentException")), 0);
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/InvalidOperationException")), 0);
		nova_exception_UnimplementedOperationException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/UnimplementedOperationException")), 0);
		nova_gc_GC_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/gc/GC")), 0);
		nova_io_Console_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/Console")), 0);
		nova_io_File_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/File")), 0);
		nova_io_FileNotFoundException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/FileNotFoundException")), 0);
		nova_io_FileReader_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/FileReader")), 0);
		nova_io_FileWriter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/FileWriter")), 0);
		nova_io_InputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/InputStream")), 1);
		nova_io_OutputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/OutputStream")), 0);
		nova_io_StreamReader_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/StreamReader")), 0);
		nova_math_ArithmeticSequence_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/ArithmeticSequence")), 0);
		nova_math_Diekstra_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Diekstra")), 0);
		nova_math_GeometricSequence_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/GeometricSequence")), 0);
		nova_math_Graph_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Graph")), 0);
		nova_math_InvalidNumericStatementException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/InvalidNumericStatementException")), 0);
		nova_math_Math_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Math")), 0);
		nova_math_Matrix_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Matrix")), 0);
		nova_math_NumericOperand_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericOperand")), 0);
		nova_math_NumericOperation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericOperation")), 0);
		nova_math_NumericStatement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericStatement")), 0);
		nova_math_NumericTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericTree")), 0);
		nova_math_Polynomial_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Polynomial")), 0);
		nova_math_Sequence_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Sequence")), 0);
		nova_math_Statement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Statement")), 0);
		nova_math_StatementComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/StatementComponent")), 0);
		nova_math_VariableOperand_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/VariableOperand")), 0);
		nova_math_Vector_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector")), 0);
		nova_math_Vector2D_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector2D")), 0);
		nova_math_Vector3D_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector3D")), 0);
		nova_math_Vector4D_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector4D")), 0);
		nova_math_calculus_Calculus_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/calculus/Calculus")), 0);
		nova_math_huffman_HuffmanTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/huffman/HuffmanTree")), 0);
		nova_math_logic_Conclusion_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/Conclusion")), 0);
		nova_math_logic_Hypothesis_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/Hypothesis")), 0);
		nova_math_logic_InvalidFormulaException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/InvalidFormulaException")), 0);
		nova_math_logic_LogicalConnective_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/LogicalConnective")), 0);
		nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/LogicalStatement")), 0);
		nova_math_logic_StatementComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/StatementComponent")), 0);
		nova_math_logic_StatementGroup_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/StatementGroup")), 0);
		nova_math_logic_StatementLetter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/StatementLetter")), 0);
		nova_math_logic_WFF_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/WFF")), 0);
		nova_meta_Field_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/meta/Field")), 0);
		nova_meta_GenericArgument_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/meta/GenericArgument")), 0);
		nova_meta_GenericParameter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/meta/GenericParameter")), 0);
		nova_meta_Type_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/meta/Type")), 0);
		nova_network_ClientSocket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/ClientSocket")), 0);
		nova_network_ConnectionSocket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/ConnectionSocket")), 0);
		nova_network_NetworkInputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/NetworkInputStream")), 0);
		nova_network_NetworkOutputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/NetworkOutputStream")), 0);
		nova_network_ServerSocket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/ServerSocket")), 0);
		nova_network_Socket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/Socket")), 0);
		nova_operators_Equals_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/operators/Equals")), 1);
		nova_operators_Multiply_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/operators/Multiply")), 1);
		nova_primitive_Bool_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Bool")), 0);
		nova_primitive_Null_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Null")), 0);
		nova_primitive_Primitive_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Primitive")), 0);
		nova_primitive_number_Byte_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Byte")), 0);
		nova_primitive_number_Char_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Char")), 0);
		nova_primitive_number_Double_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Double")), 0);
		nova_primitive_number_Float_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Float")), 0);
		nova_primitive_number_Int_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Int")), 0);
		nova_primitive_number_Integer_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Integer")), 1);
		nova_primitive_number_Long_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Long")), 0);
		nova_primitive_number_Number_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Number")), 0);
		nova_primitive_number_RealNumber_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/RealNumber")), 1);
		nova_primitive_number_Short_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Short")), 0);
		nova_process_Process_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/process/Process")), 0);
		nova_regex_Match_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/regex/Match")), 0);
		nova_regex_Pattern_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/regex/Pattern")), 0);
		nova_regex_Regex_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/regex/Regex")), 0);
		nova_security_MD5_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/security/MD5")), 0);
		nova_security_Sha256_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/security/Sha256")), 0);
		nova_star_Frame_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/star/Frame")), 0);
		nova_star_Window_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/star/Window")), 0);
		nova_star_WindowThread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/star/WindowThread")), 0);
		nova_thread_Thread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/Thread")), 0);
		nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/UncaughtExceptionHandler")), 0);
		nova_thread_async_Async_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/async/Async")), 0);
		nova_thread_async_AsyncResult_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/async/AsyncResult")), 0);
		nova_time_CumulativeTimer_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/CumulativeTimer")), 0);
		nova_time_Date_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/Date")), 0);
		nova_time_Time_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/Time")), 0);
		nova_time_Timer_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/Timer")), 0);
		nova_web_js_json_Json_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/js/json/Json")), 0);
		nova_web_svg_Svg_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/Svg")), 0);
		nova_web_svg_SvgCircle_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgCircle")), 0);
		nova_web_svg_SvgComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgComponent")), 0);
		nova_web_svg_SvgComponentList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgComponentList")), 0);
		nova_web_svg_SvgComponentNode_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgComponentNode")), 0);
		nova_web_svg_SvgMainComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgMainComponent")), 0);
		nova_web_svg_no3_No3_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3")), 0);
		nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3Node")), 0);
		nova_web_svg_no3_No3Select_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3Select")), 0);
		nova_web_svg_no3_No3SelectAll_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3SelectAll")), 0);
		spectra_InvalidParseException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/InvalidParseException")), 0);
		spectra_Spectra_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/Spectra")), 0);
		spectra_SyntaxErrorException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/SyntaxErrorException")), 0);
		spectra_SyntaxMessage_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/SyntaxMessage")), 0);
		spectra_engines_CodeGeneratorEngine_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/engines/CodeGeneratorEngine")), 0);
		spectra_error_UnimplementedOperationException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/error/UnimplementedOperationException")), 0);
		spectra_tree_AnnotationSearchResult_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/AnnotationSearchResult")), 0);
		spectra_tree_StatementIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/StatementIterator")), 0);
		spectra_tree_SyntaxTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/SyntaxTree")), 0);
		spectra_tree_nodes_Abstractable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Abstractable")), 1);
		spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Accessible")), 1);
		spectra_tree_nodes_ArgumentList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/ArgumentList")), 0);
		spectra_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/ClassDeclaration")), 0);
		spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Identifier")), 0);
		spectra_tree_nodes_Import_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Import")), 0);
		spectra_tree_nodes_ImportList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/ImportList")), 0);
		spectra_tree_nodes_InterfaceDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/InterfaceDeclaration")), 0);
		spectra_tree_nodes_Listener_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Listener")), 1);
		spectra_tree_nodes_Literal_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Literal")), 0);
		spectra_tree_nodes_Node_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Node")), 0);
		spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/NodeList")), 0);
		spectra_tree_nodes_NovaFile_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/NovaFile")), 0);
		spectra_tree_nodes_NumericRange_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/NumericRange")), 0);
		spectra_tree_nodes_Package_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Package")), 0);
		spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/PlaceholderValue")), 0);
		spectra_tree_nodes_Priority_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Priority")), 0);
		spectra_tree_nodes_Program_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Program")), 0);
		spectra_tree_nodes_Return_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Return")), 0);
		spectra_tree_nodes_Scope_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Scope")), 0);
		spectra_tree_nodes_Skeleton_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Skeleton")), 0);
		spectra_tree_nodes_StaticClassReference_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/StaticClassReference")), 0);
		spectra_tree_nodes_Type_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Type")), 0);
		spectra_tree_nodes_ValidationResult_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/ValidationResult")), 0);
		spectra_tree_nodes_Value_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/Value")), 0);
		spectra_tree_nodes_annotations_Annotatable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/annotations/Annotatable")), 1);
		spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/annotations/Annotation")), 0);
		spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/annotations/Modifier")), 1);
		spectra_tree_nodes_annotations_NativeAnnotation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/annotations/NativeAnnotation")), 0);
		spectra_tree_nodes_annotations_OverrideAnnotation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/annotations/OverrideAnnotation")), 0);
		spectra_tree_nodes_annotations_TargetAnnotation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/annotations/TargetAnnotation")), 0);
		spectra_tree_nodes_arrays_ArrayAccess_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/arrays/ArrayAccess")), 0);
		spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/controlstructures/ControlStructure")), 0);
		spectra_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/controlstructures/ElseStatement")), 0);
		spectra_tree_nodes_controlstructures_IfStatement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/controlstructures/IfStatement")), 0);
		spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/controlstructures/loops/ForEachLoop")), 0);
		spectra_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/controlstructures/loops/Loop")), 0);
		spectra_tree_nodes_controlstructures_loops_WhileLoop_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/controlstructures/loops/WhileLoop")), 0);
		spectra_tree_nodes_exceptionhandling_Catch_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/exceptionhandling/Catch")), 0);
		spectra_tree_nodes_exceptionhandling_ExceptionHandler_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/exceptionhandling/ExceptionHandler")), 0);
		spectra_tree_nodes_exceptionhandling_Throw_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/exceptionhandling/Throw")), 0);
		spectra_tree_nodes_exceptionhandling_Try_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/exceptionhandling/Try")), 0);
		spectra_tree_nodes_functions_AccessorFunction_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/AccessorFunction")), 0);
		spectra_tree_nodes_functions_ArrayInstantiation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/ArrayInstantiation")), 0);
		spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/BodyFunction")), 0);
		spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/CallableFunction")), 1);
		spectra_tree_nodes_functions_Constructor_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/Constructor")), 0);
		spectra_tree_nodes_functions_FunctionArgumentList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/FunctionArgumentList")), 0);
		spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/FunctionCall")), 0);
		spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/FunctionDeclaration")), 0);
		spectra_tree_nodes_functions_InitializationFunction_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/InitializationFunction")), 0);
		spectra_tree_nodes_functions_Instantiation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/Instantiation")), 0);
		spectra_tree_nodes_functions_MutatorFunction_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/MutatorFunction")), 0);
		spectra_tree_nodes_functions_ObjectNotation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/ObjectNotation")), 0);
		spectra_tree_nodes_functions_ObjectNotationProperty_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/ObjectNotationProperty")), 0);
		spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/Parameter")), 0);
		spectra_tree_nodes_functions_ParameterList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/ParameterList")), 0);
		spectra_tree_nodes_functions_PropertyFunction_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/PropertyFunction")), 0);
		spectra_tree_nodes_functions_closures_ClosureContext_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/closures/ClosureContext")), 0);
		spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/closures/ClosureDeclaration")), 0);
		spectra_tree_nodes_functions_closures_ClosureParameter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/closures/ClosureParameter")), 0);
		spectra_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/closures/LambdaExpression")), 0);
		spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/functions/closures/LambdaParameter")), 0);
		spectra_tree_nodes_generics_GenericArgument_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/generics/GenericArgument")), 0);
		spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/generics/GenericCompatible")), 1);
		spectra_tree_nodes_generics_GenericParameter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/generics/GenericParameter")), 0);
		spectra_tree_nodes_generics_GenericType_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/generics/GenericType")), 0);
		spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/Assignable")), 1);
		spectra_tree_nodes_operations_Assignment_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/Assignment")), 0);
		spectra_tree_nodes_operations_ElvisOperation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/ElvisOperation")), 0);
		spectra_tree_nodes_operations_Operation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/Operation")), 0);
		spectra_tree_nodes_operations_Operator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/Operator")), 0);
		spectra_tree_nodes_operations_TernaryOperation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/TernaryOperation")), 0);
		spectra_tree_nodes_operations_UnaryOperation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/operations/UnaryOperation")), 0);
		spectra_tree_nodes_variables_ArrayBracketOverload_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/ArrayBracketOverload")), 0);
		spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/FieldDeclaration")), 0);
		spectra_tree_nodes_variables_ImplicitDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/ImplicitDeclaration")), 0);
		spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/InstanceDeclaration")), 0);
		spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/LocalDeclaration")), 0);
		spectra_tree_nodes_variables_Variable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/Variable")), 0);
		spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/tree/nodes/variables/VariableDeclaration")), 0);
		spectra_util_Bounds_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/util/Bounds")), 0);
		spectra_util_CompilerStringFunctions_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/util/CompilerStringFunctions")), 0);
		spectra_util_FileUtils_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/util/FileUtils")), 0);
		spectra_util_Location_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/util/Location")), 0);
		spectra_util_OS_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/util/OS")), 0);
		spectra_util_SyntaxUtils_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("spectra/util/SyntaxUtils")), 0);
		
		
		nova_Nova_Object** nova_class_interfaces;
		
		nova_Class_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_Class_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_Object_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Equals_Extension_VTable_val.classInstance;
		nova_Object_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_String_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_String_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_Substring_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_String_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_Substring_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_System_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_System_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_ar_ImageTracker_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_ar_ImageTracker_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_ar_TrackPoint_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_ar_TrackPoint_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_database_DBConnector_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_database_DBConnector_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_database_ResultSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_database_ResultSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_BinaryNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_BinaryNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_BinaryTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Tree_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_BinaryTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_Bounds_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_Bounds_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_Comparable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_Comparable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_HashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_HashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_HashSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_HashSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_ImmutableHashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_ImmutableHashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_Pair_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_Pair_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_ReversibleHashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_HashMap_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_ReversibleHashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_Tree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_Tree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_Tuple_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_Tuple_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_Tuple2_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Tuple_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_Tuple2_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_Array_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_list_Array_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_CharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_CharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_CompiledList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_CompiledList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_DoubleArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_DoubleArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_EmptyStackException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_EmptyStackException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_ImmutableArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_ImmutableArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_ImmutableArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_ImmutableArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_ImmutableCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_list_ImmutableCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_ImmutableCharArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_ImmutableCharArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_IntArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_IntArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_IntRange_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_list_IntRange_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_Iterable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_Iterable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_Iterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_Iterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_List_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterable_Extension_VTable_val.classInstance;
		nova_datastruct_list_List_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_ListNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_ListNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_Queue_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_datastruct_list_Queue_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_datastruct_list_Stack_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_Stack_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_StringCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_CharArray_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_StringCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_datastruct_list_SubstringCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_datastruct_list_SubstringCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_Backtraces_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_Backtraces_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_CaughtException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_CaughtException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_Exception_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_Exception_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_ExceptionData_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_ExceptionData_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_exception_UnimplementedOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_exception_UnimplementedOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_gc_GC_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_gc_GC_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_Console_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_Console_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_File_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_File_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_FileNotFoundException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_FileNotFoundException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_FileReader_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_InputStream_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_FileReader_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_FileWriter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_OutputStream_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_FileWriter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_InputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_InputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_OutputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_OutputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_io_StreamReader_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_io_StreamReader_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_ArithmeticSequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Sequence_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_ArithmeticSequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Diekstra_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Diekstra_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_GeometricSequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_GeometricSequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Graph_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Graph_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_InvalidNumericStatementException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_InvalidNumericStatementException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Math_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Math_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Matrix_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Multiply_Extension_VTable_val.classInstance;
		nova_math_Matrix_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_math_NumericOperand_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_NumericOperand_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_NumericOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_NumericOperand_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_NumericOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_NumericStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Statement_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_NumericStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_NumericTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_NumericTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Polynomial_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Polynomial_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Sequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Sequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Statement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Statement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_StatementComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_StatementComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_VariableOperand_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_VariableOperand_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Vector_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Vector_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Vector2D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Vector2D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Vector3D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Vector3D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_Vector4D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_Vector4D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_calculus_Calculus_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_calculus_Calculus_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_huffman_HuffmanTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Tree_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_huffman_HuffmanTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_Conclusion_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_Conclusion_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_Hypothesis_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_Hypothesis_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_InvalidFormulaException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_InvalidFormulaException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_LogicalConnective_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_StatementComponent_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_LogicalConnective_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Statement_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_StatementComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_StatementComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_StatementGroup_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_StatementGroup_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_StatementLetter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_StatementComponent_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_StatementLetter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_math_logic_WFF_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_math_logic_WFF_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_meta_Field_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_meta_Field_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_meta_GenericArgument_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_meta_GenericArgument_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_meta_GenericParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_meta_GenericParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_meta_Type_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_meta_Type_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_network_ClientSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_network_ClientSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_network_ConnectionSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_network_ConnectionSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_network_NetworkInputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_InputStream_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_network_NetworkInputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_network_NetworkOutputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_OutputStream_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_network_NetworkOutputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_network_ServerSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_network_ServerSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_network_Socket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_network_Socket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_operators_Equals_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_operators_Equals_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_operators_Multiply_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_operators_Multiply_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_primitive_Bool_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_Primitive_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_primitive_Bool_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_primitive_Null_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_String_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_primitive_Null_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_primitive_Primitive_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_primitive_Primitive_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_primitive_number_Byte_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance;
		nova_primitive_number_Byte_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_primitive_number_Char_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance;
		nova_primitive_number_Char_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_primitive_number_Double_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_RealNumber_Extension_VTable_val.classInstance;
		nova_primitive_number_Double_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_primitive_number_Float_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_RealNumber_Extension_VTable_val.classInstance;
		nova_primitive_number_Float_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_primitive_number_Int_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance;
		nova_primitive_number_Int_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_primitive_number_Integer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_primitive_number_Integer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_primitive_number_Long_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance;
		nova_primitive_number_Long_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_primitive_number_Number_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_Primitive_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Multiply_Extension_VTable_val.classInstance;
		nova_primitive_number_Number_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		nova_primitive_number_RealNumber_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_primitive_number_RealNumber_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_primitive_number_Short_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance;
		nova_primitive_number_Short_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		nova_process_Process_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_process_Process_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_regex_Match_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_regex_Match_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_regex_Pattern_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_regex_Pattern_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_regex_Regex_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_regex_Regex_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_security_MD5_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_security_MD5_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_security_Sha256_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_security_Sha256_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_star_Frame_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_star_Frame_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_star_Window_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_star_Window_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_star_WindowThread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_star_WindowThread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_thread_Thread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_thread_Thread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_thread_async_Async_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_thread_async_Async_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_thread_async_AsyncResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_thread_async_AsyncResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_time_CumulativeTimer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_time_Timer_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_time_CumulativeTimer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_time_Date_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_time_Date_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_time_Time_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_time_Time_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_time_Timer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_time_Timer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_js_json_Json_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_HashMap_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_js_json_Json_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_Svg_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_Svg_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_SvgCircle_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_SvgComponent_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_SvgCircle_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_SvgComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_SvgComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_SvgComponentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_SvgComponentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_SvgComponentNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_SvgComponentNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_SvgMainComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_SvgComponent_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_SvgMainComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_no3_No3_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_no3_No3_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_no3_No3Select_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_no3_No3Select_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		nova_web_svg_no3_No3SelectAll_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		nova_web_svg_no3_No3SelectAll_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_InvalidParseException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_InvalidParseException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_Spectra_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_Spectra_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_SyntaxErrorException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_SyntaxErrorException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_SyntaxMessage_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_SyntaxMessage_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_engines_CodeGeneratorEngine_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_engines_CodeGeneratorEngine_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_error_UnimplementedOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_error_UnimplementedOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_AnnotationSearchResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_AnnotationSearchResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_StatementIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		spectra_tree_StatementIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_SyntaxTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_SyntaxTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Abstractable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Abstractable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_ArgumentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_ArgumentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_Abstractable_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance;
		spectra_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Import_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Import_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_ImportList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_ImportList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_InterfaceDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_InterfaceDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Listener_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Listener_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Literal_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance;
		spectra_tree_nodes_Literal_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_annotations_Annotatable_Extension_VTable_val.classInstance;
		spectra_tree_nodes_Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_NovaFile_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_NovaFile_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_NumericRange_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_Instantiation_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_NumericRange_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Package_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Package_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Priority_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance;
		spectra_tree_nodes_Priority_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_Program_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Program_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Return_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Return_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Scope_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Scope_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Skeleton_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Skeleton_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_StaticClassReference_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance;
		spectra_tree_nodes_StaticClassReference_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_Type_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Type_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_ValidationResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_ValidationResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_Value_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_Value_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_annotations_Annotatable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_annotations_Annotatable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_annotations_NativeAnnotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_annotations_NativeAnnotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_annotations_OverrideAnnotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_annotations_OverrideAnnotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_annotations_TargetAnnotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_annotations_TargetAnnotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_arrays_ArrayAccess_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_arrays_ArrayAccess_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_controlstructures_IfStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_controlstructures_IfStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_controlstructures_loops_WhileLoop_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_controlstructures_loops_WhileLoop_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_exceptionhandling_Catch_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_exceptionhandling_Catch_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_exceptionhandling_ExceptionHandler_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_exceptionhandling_ExceptionHandler_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_exceptionhandling_Throw_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_exceptionhandling_ExceptionHandler_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_exceptionhandling_Throw_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_exceptionhandling_Try_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_exceptionhandling_ExceptionHandler_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_exceptionhandling_Try_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_AccessorFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_PropertyFunction_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_AccessorFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_ArrayInstantiation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_Instantiation_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_ArrayInstantiation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance;
		spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_functions_Constructor_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_Constructor_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_FunctionArgumentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_ArgumentList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_FunctionArgumentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_Variable_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance;
		spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		spectra_tree_nodes_functions_InitializationFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_InitializationFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_Instantiation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_Instantiation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_MutatorFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_PropertyFunction_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_MutatorFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_ObjectNotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_ObjectNotation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_ObjectNotationProperty_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_operations_Assignment_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_ObjectNotationProperty_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_ParameterList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_ParameterList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_PropertyFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_PropertyFunction_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_closures_ClosureContext_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_closures_ClosureContext_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance;
		spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_functions_closures_ClosureParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_closures_ClosureParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance;
		spectra_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_generics_GenericArgument_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_generics_GenericArgument_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_generics_GenericParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_generics_GenericParameter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_generics_GenericType_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Type_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_generics_GenericType_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_Assignment_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_operations_Operation_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_Assignment_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_ElvisOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_ElvisOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_Operation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_Operation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_Operator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_Operator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_TernaryOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_TernaryOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_operations_UnaryOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_operations_UnaryOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_variables_ArrayBracketOverload_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_variables_ArrayBracketOverload_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance;
		spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_variables_ImplicitDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_variables_ImplicitDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance;
		spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 1);
		spectra_tree_nodes_variables_Variable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
		nova_class_interfaces[0] = (nova_Nova_Object*)spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance;
		nova_class_interfaces[1] = (nova_Nova_Object*)spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance;
		spectra_tree_nodes_variables_Variable_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 2);
		spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_util_Bounds_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_util_Bounds_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_util_CompilerStringFunctions_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_util_CompilerStringFunctions_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_util_FileUtils_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_util_FileUtils_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_util_Location_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_util_Location_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_util_OS_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_util_OS_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		spectra_util_SyntaxUtils_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
		spectra_util_SyntaxUtils_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_class_interfaces, 0);
		
		
		nova_Nova_Class** nova_all_classes = NOVA_MALLOC(sizeof(nova_Nova_Class*) * 246);
		nova_all_classes[0] = nova_Class_Extension_VTable_val.classInstance;
		nova_all_classes[1] = nova_Object_Extension_VTable_val.classInstance;
		nova_all_classes[2] = nova_String_Extension_VTable_val.classInstance;
		nova_all_classes[3] = nova_Substring_Extension_VTable_val.classInstance;
		nova_all_classes[4] = nova_System_Extension_VTable_val.classInstance;
		nova_all_classes[5] = nova_ar_ImageTracker_Extension_VTable_val.classInstance;
		nova_all_classes[6] = nova_ar_TrackPoint_Extension_VTable_val.classInstance;
		nova_all_classes[7] = nova_database_DBConnector_Extension_VTable_val.classInstance;
		nova_all_classes[8] = nova_database_ResultSet_Extension_VTable_val.classInstance;
		nova_all_classes[9] = nova_datastruct_BinaryNode_Extension_VTable_val.classInstance;
		nova_all_classes[10] = nova_datastruct_BinaryTree_Extension_VTable_val.classInstance;
		nova_all_classes[11] = nova_datastruct_Bounds_Extension_VTable_val.classInstance;
		nova_all_classes[12] = nova_datastruct_Comparable_Extension_VTable_val.classInstance;
		nova_all_classes[13] = nova_datastruct_HashMap_Extension_VTable_val.classInstance;
		nova_all_classes[14] = nova_datastruct_HashSet_Extension_VTable_val.classInstance;
		nova_all_classes[15] = nova_datastruct_ImmutableHashMap_Extension_VTable_val.classInstance;
		nova_all_classes[16] = nova_datastruct_Node_Extension_VTable_val.classInstance;
		nova_all_classes[17] = nova_datastruct_Pair_Extension_VTable_val.classInstance;
		nova_all_classes[18] = nova_datastruct_ReversibleHashMap_Extension_VTable_val.classInstance;
		nova_all_classes[19] = nova_datastruct_Tree_Extension_VTable_val.classInstance;
		nova_all_classes[20] = nova_datastruct_Tuple_Extension_VTable_val.classInstance;
		nova_all_classes[21] = nova_datastruct_Tuple2_Extension_VTable_val.classInstance;
		nova_all_classes[22] = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_all_classes[23] = nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance;
		nova_all_classes[24] = nova_datastruct_list_CharArray_Extension_VTable_val.classInstance;
		nova_all_classes[25] = nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance;
		nova_all_classes[26] = nova_datastruct_list_CompiledList_Extension_VTable_val.classInstance;
		nova_all_classes[27] = nova_datastruct_list_DoubleArray_Extension_VTable_val.classInstance;
		nova_all_classes[28] = nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance;
		nova_all_classes[29] = nova_datastruct_list_EmptyStackException_Extension_VTable_val.classInstance;
		nova_all_classes[30] = nova_datastruct_list_ImmutableArray_Extension_VTable_val.classInstance;
		nova_all_classes[31] = nova_datastruct_list_ImmutableArrayIterator_Extension_VTable_val.classInstance;
		nova_all_classes[32] = nova_datastruct_list_ImmutableCharArray_Extension_VTable_val.classInstance;
		nova_all_classes[33] = nova_datastruct_list_ImmutableCharArrayIterator_Extension_VTable_val.classInstance;
		nova_all_classes[34] = nova_datastruct_list_IntArray_Extension_VTable_val.classInstance;
		nova_all_classes[35] = nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance;
		nova_all_classes[36] = nova_datastruct_list_IntRange_Extension_VTable_val.classInstance;
		nova_all_classes[37] = nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance;
		nova_all_classes[38] = nova_datastruct_list_Iterable_Extension_VTable_val.classInstance;
		nova_all_classes[39] = nova_datastruct_list_Iterator_Extension_VTable_val.classInstance;
		nova_all_classes[40] = nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance;
		nova_all_classes[41] = nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance;
		nova_all_classes[42] = nova_datastruct_list_List_Extension_VTable_val.classInstance;
		nova_all_classes[43] = nova_datastruct_list_ListNode_Extension_VTable_val.classInstance;
		nova_all_classes[44] = nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance;
		nova_all_classes[45] = nova_datastruct_list_Queue_Extension_VTable_val.classInstance;
		nova_all_classes[46] = nova_datastruct_list_Stack_Extension_VTable_val.classInstance;
		nova_all_classes[47] = nova_datastruct_list_StringCharArray_Extension_VTable_val.classInstance;
		nova_all_classes[48] = nova_datastruct_list_SubstringCharArray_Extension_VTable_val.classInstance;
		nova_all_classes[49] = nova_exception_Backtraces_Extension_VTable_val.classInstance;
		nova_all_classes[50] = nova_exception_CaughtException_Extension_VTable_val.classInstance;
		nova_all_classes[51] = nova_exception_DivideByZeroException_Extension_VTable_val.classInstance;
		nova_all_classes[52] = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_all_classes[53] = nova_exception_ExceptionData_Extension_VTable_val.classInstance;
		nova_all_classes[54] = nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance;
		nova_all_classes[55] = nova_exception_InvalidOperationException_Extension_VTable_val.classInstance;
		nova_all_classes[56] = nova_exception_UnimplementedOperationException_Extension_VTable_val.classInstance;
		nova_all_classes[57] = nova_gc_GC_Extension_VTable_val.classInstance;
		nova_all_classes[58] = nova_io_Console_Extension_VTable_val.classInstance;
		nova_all_classes[59] = nova_io_File_Extension_VTable_val.classInstance;
		nova_all_classes[60] = nova_io_FileNotFoundException_Extension_VTable_val.classInstance;
		nova_all_classes[61] = nova_io_FileReader_Extension_VTable_val.classInstance;
		nova_all_classes[62] = nova_io_FileWriter_Extension_VTable_val.classInstance;
		nova_all_classes[63] = nova_io_InputStream_Extension_VTable_val.classInstance;
		nova_all_classes[64] = nova_io_OutputStream_Extension_VTable_val.classInstance;
		nova_all_classes[65] = nova_io_StreamReader_Extension_VTable_val.classInstance;
		nova_all_classes[66] = nova_math_ArithmeticSequence_Extension_VTable_val.classInstance;
		nova_all_classes[67] = nova_math_Diekstra_Extension_VTable_val.classInstance;
		nova_all_classes[68] = nova_math_GeometricSequence_Extension_VTable_val.classInstance;
		nova_all_classes[69] = nova_math_Graph_Extension_VTable_val.classInstance;
		nova_all_classes[70] = nova_math_InvalidNumericStatementException_Extension_VTable_val.classInstance;
		nova_all_classes[71] = nova_math_Math_Extension_VTable_val.classInstance;
		nova_all_classes[72] = nova_math_Matrix_Extension_VTable_val.classInstance;
		nova_all_classes[73] = nova_math_NumericOperand_Extension_VTable_val.classInstance;
		nova_all_classes[74] = nova_math_NumericOperation_Extension_VTable_val.classInstance;
		nova_all_classes[75] = nova_math_NumericStatement_Extension_VTable_val.classInstance;
		nova_all_classes[76] = nova_math_NumericTree_Extension_VTable_val.classInstance;
		nova_all_classes[77] = nova_math_Polynomial_Extension_VTable_val.classInstance;
		nova_all_classes[78] = nova_math_Sequence_Extension_VTable_val.classInstance;
		nova_all_classes[79] = nova_math_Statement_Extension_VTable_val.classInstance;
		nova_all_classes[80] = nova_math_StatementComponent_Extension_VTable_val.classInstance;
		nova_all_classes[81] = nova_math_VariableOperand_Extension_VTable_val.classInstance;
		nova_all_classes[82] = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_all_classes[83] = nova_math_Vector2D_Extension_VTable_val.classInstance;
		nova_all_classes[84] = nova_math_Vector3D_Extension_VTable_val.classInstance;
		nova_all_classes[85] = nova_math_Vector4D_Extension_VTable_val.classInstance;
		nova_all_classes[86] = nova_math_calculus_Calculus_Extension_VTable_val.classInstance;
		nova_all_classes[87] = nova_math_huffman_HuffmanTree_Extension_VTable_val.classInstance;
		nova_all_classes[88] = nova_math_logic_Conclusion_Extension_VTable_val.classInstance;
		nova_all_classes[89] = nova_math_logic_Hypothesis_Extension_VTable_val.classInstance;
		nova_all_classes[90] = nova_math_logic_InvalidFormulaException_Extension_VTable_val.classInstance;
		nova_all_classes[91] = nova_math_logic_LogicalConnective_Extension_VTable_val.classInstance;
		nova_all_classes[92] = nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance;
		nova_all_classes[93] = nova_math_logic_StatementComponent_Extension_VTable_val.classInstance;
		nova_all_classes[94] = nova_math_logic_StatementGroup_Extension_VTable_val.classInstance;
		nova_all_classes[95] = nova_math_logic_StatementLetter_Extension_VTable_val.classInstance;
		nova_all_classes[96] = nova_math_logic_WFF_Extension_VTable_val.classInstance;
		nova_all_classes[97] = nova_meta_Field_Extension_VTable_val.classInstance;
		nova_all_classes[98] = nova_meta_GenericArgument_Extension_VTable_val.classInstance;
		nova_all_classes[99] = nova_meta_GenericParameter_Extension_VTable_val.classInstance;
		nova_all_classes[100] = nova_meta_Type_Extension_VTable_val.classInstance;
		nova_all_classes[101] = nova_network_ClientSocket_Extension_VTable_val.classInstance;
		nova_all_classes[102] = nova_network_ConnectionSocket_Extension_VTable_val.classInstance;
		nova_all_classes[103] = nova_network_NetworkInputStream_Extension_VTable_val.classInstance;
		nova_all_classes[104] = nova_network_NetworkOutputStream_Extension_VTable_val.classInstance;
		nova_all_classes[105] = nova_network_ServerSocket_Extension_VTable_val.classInstance;
		nova_all_classes[106] = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_all_classes[107] = nova_operators_Equals_Extension_VTable_val.classInstance;
		nova_all_classes[108] = nova_operators_Multiply_Extension_VTable_val.classInstance;
		nova_all_classes[109] = nova_primitive_Bool_Extension_VTable_val.classInstance;
		nova_all_classes[110] = nova_primitive_Null_Extension_VTable_val.classInstance;
		nova_all_classes[111] = nova_primitive_Primitive_Extension_VTable_val.classInstance;
		nova_all_classes[112] = nova_primitive_number_Byte_Extension_VTable_val.classInstance;
		nova_all_classes[113] = nova_primitive_number_Char_Extension_VTable_val.classInstance;
		nova_all_classes[114] = nova_primitive_number_Double_Extension_VTable_val.classInstance;
		nova_all_classes[115] = nova_primitive_number_Float_Extension_VTable_val.classInstance;
		nova_all_classes[116] = nova_primitive_number_Int_Extension_VTable_val.classInstance;
		nova_all_classes[117] = nova_primitive_number_Integer_Extension_VTable_val.classInstance;
		nova_all_classes[118] = nova_primitive_number_Long_Extension_VTable_val.classInstance;
		nova_all_classes[119] = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_all_classes[120] = nova_primitive_number_RealNumber_Extension_VTable_val.classInstance;
		nova_all_classes[121] = nova_primitive_number_Short_Extension_VTable_val.classInstance;
		nova_all_classes[122] = nova_process_Process_Extension_VTable_val.classInstance;
		nova_all_classes[123] = nova_regex_Match_Extension_VTable_val.classInstance;
		nova_all_classes[124] = nova_regex_Pattern_Extension_VTable_val.classInstance;
		nova_all_classes[125] = nova_regex_Regex_Extension_VTable_val.classInstance;
		nova_all_classes[126] = nova_security_MD5_Extension_VTable_val.classInstance;
		nova_all_classes[127] = nova_security_Sha256_Extension_VTable_val.classInstance;
		nova_all_classes[128] = nova_star_Frame_Extension_VTable_val.classInstance;
		nova_all_classes[129] = nova_star_Window_Extension_VTable_val.classInstance;
		nova_all_classes[130] = nova_star_WindowThread_Extension_VTable_val.classInstance;
		nova_all_classes[131] = nova_thread_Thread_Extension_VTable_val.classInstance;
		nova_all_classes[132] = nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance;
		nova_all_classes[133] = nova_thread_async_Async_Extension_VTable_val.classInstance;
		nova_all_classes[134] = nova_thread_async_AsyncResult_Extension_VTable_val.classInstance;
		nova_all_classes[135] = nova_time_CumulativeTimer_Extension_VTable_val.classInstance;
		nova_all_classes[136] = nova_time_Date_Extension_VTable_val.classInstance;
		nova_all_classes[137] = nova_time_Time_Extension_VTable_val.classInstance;
		nova_all_classes[138] = nova_time_Timer_Extension_VTable_val.classInstance;
		nova_all_classes[139] = nova_web_js_json_Json_Extension_VTable_val.classInstance;
		nova_all_classes[140] = nova_web_svg_Svg_Extension_VTable_val.classInstance;
		nova_all_classes[141] = nova_web_svg_SvgCircle_Extension_VTable_val.classInstance;
		nova_all_classes[142] = nova_web_svg_SvgComponent_Extension_VTable_val.classInstance;
		nova_all_classes[143] = nova_web_svg_SvgComponentList_Extension_VTable_val.classInstance;
		nova_all_classes[144] = nova_web_svg_SvgComponentNode_Extension_VTable_val.classInstance;
		nova_all_classes[145] = nova_web_svg_SvgMainComponent_Extension_VTable_val.classInstance;
		nova_all_classes[146] = nova_web_svg_no3_No3_Extension_VTable_val.classInstance;
		nova_all_classes[147] = nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance;
		nova_all_classes[148] = nova_web_svg_no3_No3Select_Extension_VTable_val.classInstance;
		nova_all_classes[149] = nova_web_svg_no3_No3SelectAll_Extension_VTable_val.classInstance;
		nova_all_classes[150] = spectra_InvalidParseException_Extension_VTable_val.classInstance;
		nova_all_classes[151] = spectra_Spectra_Extension_VTable_val.classInstance;
		nova_all_classes[152] = spectra_SyntaxErrorException_Extension_VTable_val.classInstance;
		nova_all_classes[153] = spectra_SyntaxMessage_Extension_VTable_val.classInstance;
		nova_all_classes[154] = spectra_engines_CodeGeneratorEngine_Extension_VTable_val.classInstance;
		nova_all_classes[155] = spectra_error_UnimplementedOperationException_Extension_VTable_val.classInstance;
		nova_all_classes[156] = spectra_tree_AnnotationSearchResult_Extension_VTable_val.classInstance;
		nova_all_classes[157] = spectra_tree_StatementIterator_Extension_VTable_val.classInstance;
		nova_all_classes[158] = spectra_tree_SyntaxTree_Extension_VTable_val.classInstance;
		nova_all_classes[159] = spectra_tree_nodes_Abstractable_Extension_VTable_val.classInstance;
		nova_all_classes[160] = spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance;
		nova_all_classes[161] = spectra_tree_nodes_ArgumentList_Extension_VTable_val.classInstance;
		nova_all_classes[162] = spectra_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[163] = spectra_tree_nodes_Identifier_Extension_VTable_val.classInstance;
		nova_all_classes[164] = spectra_tree_nodes_Import_Extension_VTable_val.classInstance;
		nova_all_classes[165] = spectra_tree_nodes_ImportList_Extension_VTable_val.classInstance;
		nova_all_classes[166] = spectra_tree_nodes_InterfaceDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[167] = spectra_tree_nodes_Listener_Extension_VTable_val.classInstance;
		nova_all_classes[168] = spectra_tree_nodes_Literal_Extension_VTable_val.classInstance;
		nova_all_classes[169] = spectra_tree_nodes_Node_Extension_VTable_val.classInstance;
		nova_all_classes[170] = spectra_tree_nodes_NodeList_Extension_VTable_val.classInstance;
		nova_all_classes[171] = spectra_tree_nodes_NovaFile_Extension_VTable_val.classInstance;
		nova_all_classes[172] = spectra_tree_nodes_NumericRange_Extension_VTable_val.classInstance;
		nova_all_classes[173] = spectra_tree_nodes_Package_Extension_VTable_val.classInstance;
		nova_all_classes[174] = spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance;
		nova_all_classes[175] = spectra_tree_nodes_Priority_Extension_VTable_val.classInstance;
		nova_all_classes[176] = spectra_tree_nodes_Program_Extension_VTable_val.classInstance;
		nova_all_classes[177] = spectra_tree_nodes_Return_Extension_VTable_val.classInstance;
		nova_all_classes[178] = spectra_tree_nodes_Scope_Extension_VTable_val.classInstance;
		nova_all_classes[179] = spectra_tree_nodes_Skeleton_Extension_VTable_val.classInstance;
		nova_all_classes[180] = spectra_tree_nodes_StaticClassReference_Extension_VTable_val.classInstance;
		nova_all_classes[181] = spectra_tree_nodes_Type_Extension_VTable_val.classInstance;
		nova_all_classes[182] = spectra_tree_nodes_ValidationResult_Extension_VTable_val.classInstance;
		nova_all_classes[183] = spectra_tree_nodes_Value_Extension_VTable_val.classInstance;
		nova_all_classes[184] = spectra_tree_nodes_annotations_Annotatable_Extension_VTable_val.classInstance;
		nova_all_classes[185] = spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance;
		nova_all_classes[186] = spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance;
		nova_all_classes[187] = spectra_tree_nodes_annotations_NativeAnnotation_Extension_VTable_val.classInstance;
		nova_all_classes[188] = spectra_tree_nodes_annotations_OverrideAnnotation_Extension_VTable_val.classInstance;
		nova_all_classes[189] = spectra_tree_nodes_annotations_TargetAnnotation_Extension_VTable_val.classInstance;
		nova_all_classes[190] = spectra_tree_nodes_arrays_ArrayAccess_Extension_VTable_val.classInstance;
		nova_all_classes[191] = spectra_tree_nodes_controlstructures_ControlStructure_Extension_VTable_val.classInstance;
		nova_all_classes[192] = spectra_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val.classInstance;
		nova_all_classes[193] = spectra_tree_nodes_controlstructures_IfStatement_Extension_VTable_val.classInstance;
		nova_all_classes[194] = spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable_val.classInstance;
		nova_all_classes[195] = spectra_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance;
		nova_all_classes[196] = spectra_tree_nodes_controlstructures_loops_WhileLoop_Extension_VTable_val.classInstance;
		nova_all_classes[197] = spectra_tree_nodes_exceptionhandling_Catch_Extension_VTable_val.classInstance;
		nova_all_classes[198] = spectra_tree_nodes_exceptionhandling_ExceptionHandler_Extension_VTable_val.classInstance;
		nova_all_classes[199] = spectra_tree_nodes_exceptionhandling_Throw_Extension_VTable_val.classInstance;
		nova_all_classes[200] = spectra_tree_nodes_exceptionhandling_Try_Extension_VTable_val.classInstance;
		nova_all_classes[201] = spectra_tree_nodes_functions_AccessorFunction_Extension_VTable_val.classInstance;
		nova_all_classes[202] = spectra_tree_nodes_functions_ArrayInstantiation_Extension_VTable_val.classInstance;
		nova_all_classes[203] = spectra_tree_nodes_functions_BodyFunction_Extension_VTable_val.classInstance;
		nova_all_classes[204] = spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val.classInstance;
		nova_all_classes[205] = spectra_tree_nodes_functions_Constructor_Extension_VTable_val.classInstance;
		nova_all_classes[206] = spectra_tree_nodes_functions_FunctionArgumentList_Extension_VTable_val.classInstance;
		nova_all_classes[207] = spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val.classInstance;
		nova_all_classes[208] = spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[209] = spectra_tree_nodes_functions_InitializationFunction_Extension_VTable_val.classInstance;
		nova_all_classes[210] = spectra_tree_nodes_functions_Instantiation_Extension_VTable_val.classInstance;
		nova_all_classes[211] = spectra_tree_nodes_functions_MutatorFunction_Extension_VTable_val.classInstance;
		nova_all_classes[212] = spectra_tree_nodes_functions_ObjectNotation_Extension_VTable_val.classInstance;
		nova_all_classes[213] = spectra_tree_nodes_functions_ObjectNotationProperty_Extension_VTable_val.classInstance;
		nova_all_classes[214] = spectra_tree_nodes_functions_Parameter_Extension_VTable_val.classInstance;
		nova_all_classes[215] = spectra_tree_nodes_functions_ParameterList_Extension_VTable_val.classInstance;
		nova_all_classes[216] = spectra_tree_nodes_functions_PropertyFunction_Extension_VTable_val.classInstance;
		nova_all_classes[217] = spectra_tree_nodes_functions_closures_ClosureContext_Extension_VTable_val.classInstance;
		nova_all_classes[218] = spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[219] = spectra_tree_nodes_functions_closures_ClosureParameter_Extension_VTable_val.classInstance;
		nova_all_classes[220] = spectra_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val.classInstance;
		nova_all_classes[221] = spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val.classInstance;
		nova_all_classes[222] = spectra_tree_nodes_generics_GenericArgument_Extension_VTable_val.classInstance;
		nova_all_classes[223] = spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val.classInstance;
		nova_all_classes[224] = spectra_tree_nodes_generics_GenericParameter_Extension_VTable_val.classInstance;
		nova_all_classes[225] = spectra_tree_nodes_generics_GenericType_Extension_VTable_val.classInstance;
		nova_all_classes[226] = spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance;
		nova_all_classes[227] = spectra_tree_nodes_operations_Assignment_Extension_VTable_val.classInstance;
		nova_all_classes[228] = spectra_tree_nodes_operations_ElvisOperation_Extension_VTable_val.classInstance;
		nova_all_classes[229] = spectra_tree_nodes_operations_Operation_Extension_VTable_val.classInstance;
		nova_all_classes[230] = spectra_tree_nodes_operations_Operator_Extension_VTable_val.classInstance;
		nova_all_classes[231] = spectra_tree_nodes_operations_TernaryOperation_Extension_VTable_val.classInstance;
		nova_all_classes[232] = spectra_tree_nodes_operations_UnaryOperation_Extension_VTable_val.classInstance;
		nova_all_classes[233] = spectra_tree_nodes_variables_ArrayBracketOverload_Extension_VTable_val.classInstance;
		nova_all_classes[234] = spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[235] = spectra_tree_nodes_variables_ImplicitDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[236] = spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[237] = spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[238] = spectra_tree_nodes_variables_Variable_Extension_VTable_val.classInstance;
		nova_all_classes[239] = spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.classInstance;
		nova_all_classes[240] = spectra_util_Bounds_Extension_VTable_val.classInstance;
		nova_all_classes[241] = spectra_util_CompilerStringFunctions_Extension_VTable_val.classInstance;
		nova_all_classes[242] = spectra_util_FileUtils_Extension_VTable_val.classInstance;
		nova_all_classes[243] = spectra_util_Location_Extension_VTable_val.classInstance;
		nova_all_classes[244] = spectra_util_OS_Extension_VTable_val.classInstance;
		nova_all_classes[245] = spectra_util_SyntaxUtils_Extension_VTable_val.classInstance;
		nova_Nova_Class_Nova_ALL = nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(0, exceptionData, (nova_Nova_Object**)nova_all_classes, 246);
		
		
		nova_Nova_Class_Nova_init_static(exceptionData);
		nova_Nova_Object_Nova_init_static(exceptionData);
		nova_Nova_String_Nova_init_static(exceptionData);
		nova_Nova_Substring_Nova_init_static(exceptionData);
		nova_Nova_System_Nova_init_static(exceptionData);
		nova_ar_Nova_ImageTracker_Nova_init_static(exceptionData);
		nova_ar_Nova_TrackPoint_Nova_init_static(exceptionData);
		nova_database_Nova_DBConnector_Nova_init_static(exceptionData);
		nova_database_Nova_ResultSet_Nova_init_static(exceptionData);
		nova_datastruct_Nova_BinaryNode_Nova_init_static(exceptionData);
		nova_datastruct_Nova_BinaryTree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Bounds_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Comparable_Nova_init_static(exceptionData);
		nova_datastruct_Nova_HashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_HashSet_Nova_init_static(exceptionData);
		nova_datastruct_Nova_ImmutableHashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Node_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Pair_Nova_init_static(exceptionData);
		nova_datastruct_Nova_ReversibleHashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tuple_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tuple2_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Array_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CompiledList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_EmptyStackException_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ImmutableArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ImmutableCharArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntRange_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntRangeIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Iterable_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Iterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_LinkedList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_LinkedListIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_List_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ListNode_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_NoSuchElementException_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Queue_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Stack_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_StringCharArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_SubstringCharArray_Nova_init_static(exceptionData);
		nova_exception_Nova_Backtraces_Nova_init_static(exceptionData);
		nova_exception_Nova_CaughtException_Nova_init_static(exceptionData);
		nova_exception_Nova_DivideByZeroException_Nova_init_static(exceptionData);
		nova_exception_Nova_Exception_Nova_init_static(exceptionData);
		nova_exception_Nova_ExceptionData_Nova_init_static(exceptionData);
		nova_exception_Nova_InvalidArgumentException_Nova_init_static(exceptionData);
		nova_exception_Nova_InvalidOperationException_Nova_init_static(exceptionData);
		nova_exception_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		nova_gc_Nova_GC_Nova_init_static(exceptionData);
		nova_io_Nova_Console_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_FileNotFoundException_Nova_init_static(exceptionData);
		nova_io_Nova_FileReader_Nova_init_static(exceptionData);
		nova_io_Nova_FileWriter_Nova_init_static(exceptionData);
		nova_io_Nova_InputStream_Nova_init_static(exceptionData);
		nova_io_Nova_OutputStream_Nova_init_static(exceptionData);
		nova_io_Nova_StreamReader_Nova_init_static(exceptionData);
		nova_math_Nova_ArithmeticSequence_Nova_init_static(exceptionData);
		nova_math_Nova_Diekstra_Nova_init_static(exceptionData);
		nova_math_Nova_GeometricSequence_Nova_init_static(exceptionData);
		nova_math_Nova_Graph_Nova_init_static(exceptionData);
		nova_math_Nova_InvalidNumericStatementException_Nova_init_static(exceptionData);
		nova_math_Nova_Math_Nova_init_static(exceptionData);
		nova_math_Nova_Matrix_Nova_init_static(exceptionData);
		nova_math_Nova_NumericOperand_Nova_init_static(exceptionData);
		nova_math_Nova_NumericOperation_Nova_init_static(exceptionData);
		nova_math_Nova_NumericStatement_Nova_init_static(exceptionData);
		nova_math_Nova_NumericTree_Nova_init_static(exceptionData);
		nova_math_Nova_Polynomial_Nova_init_static(exceptionData);
		nova_math_Nova_Sequence_Nova_init_static(exceptionData);
		nova_math_Nova_Statement_Nova_init_static(exceptionData);
		nova_math_Nova_StatementComponent_Nova_init_static(exceptionData);
		nova_math_Nova_VariableOperand_Nova_init_static(exceptionData);
		nova_math_Nova_Vector_Nova_init_static(exceptionData);
		nova_math_Nova_Vector2D_Nova_init_static(exceptionData);
		nova_math_Nova_Vector3D_Nova_init_static(exceptionData);
		nova_math_Nova_Vector4D_Nova_init_static(exceptionData);
		nova_math_calculus_Nova_Calculus_Nova_init_static(exceptionData);
		nova_math_huffman_Nova_HuffmanTree_Nova_init_static(exceptionData);
		nova_math_logic_Nova_Conclusion_Nova_init_static(exceptionData);
		nova_math_logic_Nova_Hypothesis_Nova_init_static(exceptionData);
		nova_math_logic_Nova_InvalidFormulaException_Nova_init_static(exceptionData);
		nova_math_logic_Nova_LogicalConnective_Nova_init_static(exceptionData);
		nova_math_logic_Nova_LogicalStatement_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementComponent_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementGroup_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementLetter_Nova_init_static(exceptionData);
		nova_math_logic_Nova_WFF_Nova_init_static(exceptionData);
		nova_meta_Nova_Field_Nova_init_static(exceptionData);
		nova_meta_Nova_GenericArgument_Nova_init_static(exceptionData);
		nova_meta_Nova_GenericParameter_Nova_init_static(exceptionData);
		nova_meta_Nova_Type_Nova_init_static(exceptionData);
		nova_network_Nova_ClientSocket_Nova_init_static(exceptionData);
		nova_network_Nova_ConnectionSocket_Nova_init_static(exceptionData);
		nova_network_Nova_NetworkInputStream_Nova_init_static(exceptionData);
		nova_network_Nova_NetworkOutputStream_Nova_init_static(exceptionData);
		nova_network_Nova_ServerSocket_Nova_init_static(exceptionData);
		nova_network_Nova_Socket_Nova_init_static(exceptionData);
		nova_operators_Nova_Equals_Nova_init_static(exceptionData);
		nova_operators_Nova_Multiply_Nova_init_static(exceptionData);
		nova_primitive_Nova_Bool_Nova_init_static(exceptionData);
		nova_primitive_Nova_Null_Nova_init_static(exceptionData);
		nova_primitive_Nova_Primitive_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Byte_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Char_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Double_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Float_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Int_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Integer_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Long_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Number_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_RealNumber_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Short_Nova_init_static(exceptionData);
		nova_process_Nova_Process_Nova_init_static(exceptionData);
		nova_regex_Nova_Match_Nova_init_static(exceptionData);
		nova_regex_Nova_Pattern_Nova_init_static(exceptionData);
		nova_regex_Nova_Regex_Nova_init_static(exceptionData);
		nova_security_Nova_MD5_Nova_init_static(exceptionData);
		nova_security_Nova_Sha256_Nova_init_static(exceptionData);
		nova_star_Nova_Frame_Nova_init_static(exceptionData);
		nova_star_Nova_Window_Nova_init_static(exceptionData);
		nova_star_Nova_WindowThread_Nova_init_static(exceptionData);
		nova_thread_Nova_Thread_Nova_init_static(exceptionData);
		nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static(exceptionData);
		nova_thread_async_Nova_Async_Nova_init_static(exceptionData);
		nova_thread_async_Nova_AsyncResult_Nova_init_static(exceptionData);
		nova_time_Nova_CumulativeTimer_Nova_init_static(exceptionData);
		nova_time_Nova_Date_Nova_init_static(exceptionData);
		nova_time_Nova_Time_Nova_init_static(exceptionData);
		nova_time_Nova_Timer_Nova_init_static(exceptionData);
		nova_web_js_json_Nova_Json_Nova_init_static(exceptionData);
		nova_web_svg_Nova_Svg_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgCircle_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponent_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponentList_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponentNode_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgMainComponent_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3Node_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3Select_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3SelectAll_Nova_init_static(exceptionData);
		spectra_Nova_InvalidParseException_Nova_init_static(exceptionData);
		spectra_Nova_Spectra_Nova_init_static(exceptionData);
		spectra_Nova_SyntaxErrorException_Nova_init_static(exceptionData);
		spectra_Nova_SyntaxMessage_Nova_init_static(exceptionData);
		spectra_engines_Nova_CodeGeneratorEngine_Nova_init_static(exceptionData);
		spectra_error_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		spectra_tree_Nova_AnnotationSearchResult_Nova_init_static(exceptionData);
		spectra_tree_Nova_StatementIterator_Nova_init_static(exceptionData);
		spectra_tree_Nova_SyntaxTree_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Abstractable_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Accessible_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_ArgumentList_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_ClassDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Identifier_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Import_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_ImportList_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_InterfaceDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Listener_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Literal_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Node_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_NodeList_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_NovaFile_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_NumericRange_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Package_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_PlaceholderValue_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Priority_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Program_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Return_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Scope_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Skeleton_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_StaticClassReference_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Type_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_ValidationResult_Nova_init_static(exceptionData);
		spectra_tree_nodes_Nova_Value_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_Annotatable_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_Annotation_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_Modifier_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_Modifier_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_NativeAnnotation_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_OverrideAnnotation_Nova_init_static(exceptionData);
		spectra_tree_nodes_annotations_Nova_TargetAnnotation_Nova_init_static(exceptionData);
		spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_init_static(exceptionData);
		spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_init_static(exceptionData);
		spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_init_static(exceptionData);
		spectra_tree_nodes_controlstructures_Nova_IfStatement_Nova_init_static(exceptionData);
		spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_init_static(exceptionData);
		spectra_tree_nodes_controlstructures_loops_Nova_Loop_Nova_init_static(exceptionData);
		spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_Nova_init_static(exceptionData);
		spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_init_static(exceptionData);
		spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_Nova_init_static(exceptionData);
		spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_init_static(exceptionData);
		spectra_tree_nodes_exceptionhandling_Nova_Try_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_AccessorFunction_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_BodyFunction_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_CallableFunction_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_Constructor_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_FunctionArgumentList_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_FunctionCall_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_InitializationFunction_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_Instantiation_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_MutatorFunction_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_Parameter_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_ParameterList_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_Nova_PropertyFunction_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_closures_Nova_ClosureContext_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_closures_Nova_ClosureParameter_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_init_static(exceptionData);
		spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_init_static(exceptionData);
		spectra_tree_nodes_generics_Nova_GenericArgument_Nova_init_static(exceptionData);
		spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_init_static(exceptionData);
		spectra_tree_nodes_generics_Nova_GenericParameter_Nova_init_static(exceptionData);
		spectra_tree_nodes_generics_Nova_GenericType_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_Assignable_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_Assignment_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_Operation_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_Operator_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_Operator_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_TernaryOperation_Nova_init_static(exceptionData);
		spectra_tree_nodes_operations_Nova_UnaryOperation_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_ArrayBracketOverload_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_Variable_Nova_init_static(exceptionData);
		spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_init_static(exceptionData);
		spectra_util_Nova_Bounds_Nova_init_static(exceptionData);
		spectra_util_Nova_CompilerStringFunctions_Nova_init_static(exceptionData);
		spectra_util_Nova_FileUtils_Nova_init_static(exceptionData);
		spectra_util_Nova_Location_Nova_init_static(exceptionData);
		spectra_util_Nova_OS_Nova_init_static(exceptionData);
		spectra_util_Nova_OS_Nova_init_static(exceptionData);
		spectra_util_Nova_SyntaxUtils_Nova_init_static(exceptionData);
		
		args = (nova_Nova_String**)NOVA_MALLOC(argc * sizeof(nova_Nova_String));
		
		for (i = 0; i < argc; i++)
		{
				char* str = (char*)NOVA_MALLOC(sizeof(char) * strlen(argvs[i]) + 1);
				copy_string(str, argvs[i]);
				args[i] = nova_Nova_String_1_Nova_construct(0, 0, str);
		}
		nova_datastruct_list_Nova_Array* argsArray = nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)args, argc);
		TRY
		{
				spectra_Nova_Spectra_static_Nova_main(0, exceptionData, argsArray);
		}
		CATCH (nova_exception_Exception_Extension_VTable_val.classInstance)
		{
				char* message = "Exception in Thread 'main'";
				nova_exception_Nova_Exception* base = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				if (base != 0 && base->nova_exception_Nova_Exception_Nova_message != 0 && base->nova_exception_Nova_Exception_Nova_message != (nova_Nova_String*)nova_null) {
						printf("%s: %s", message, base->nova_exception_Nova_Exception_Nova_message->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
				} else {
						puts(message);
				}
				nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
				
		}
		FINALLY
		{
				
		}
		END_TRY;
		FreeConsole();
		NOVA_FREE(args);
		nova_gc_Nova_GC_static_Nova_collect(0, exceptionData);
		
		
		return 0;
}