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
#include <compiler/util/compiler_util_Nova_FileUtils.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/compiler_tree_Nova_SyntaxTree.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
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
	/* Program program */ compiler_tree_nodes_Nova_Program** compiler_Nova_Compiler_Nova_program;
} Context3;
typedef struct
{
} Context4;
typedef struct
{
	/* String separator */ nova_Nova_String** compiler_Nova_Compiler_Nova_separator;
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


compiler_Compiler_Extension_VTable compiler_Compiler_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
	nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_files;
	
)

void compiler_Nova_Compiler_func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated27(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16);
char compiler_Nova_Compiler_Nova_testLambda79(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
compiler_tree_nodes_Nova_NovaFile* compiler_Nova_Compiler_Nova_testLambda80(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void compiler_Nova_Compiler_Nova_testLambda81(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
char compiler_Nova_Compiler_Nova_testLambda82(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
nova_Nova_String* compiler_Nova_Compiler_Nova_testLambda83(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
void compiler_Nova_Compiler_Nova_testLambda84(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
void compiler_Nova_Compiler_Nova_testLambda85(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
void compiler_Nova_Compiler_Nova_testLambda86(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
char compiler_Nova_Compiler_Nova_DEBUG;
char compiler_Nova_Compiler_Nova_testClasses;
void compiler_Nova_Compiler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_Nova_Compiler_Nova_DEBUG = 1;
		compiler_Nova_Compiler_Nova_testClasses = 1;
	}
}

compiler_Nova_Compiler* compiler_Nova_Compiler_Nova_construct(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_Nova_Compiler, this);
	this->vtable = &compiler_Compiler_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_Nova_Compiler_Nova_super(this, exceptionData);
	
	{
		compiler_Nova_Compiler_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_Nova_Compiler_Nova_destroy(compiler_Nova_Compiler** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->compiler_Nova_Compiler_Nova_files, exceptionData);
	NOVA_FREE((*this)->prv);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_Nova_Compiler_Nova_errors, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_Nova_Compiler_Nova_warnings, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_Nova_Compiler_Nova_info, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_Nova_Compiler_static_Nova_main(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	compiler_Nova_Compiler* l1_Nova_c = (compiler_Nova_Compiler*)nova_null;
	
	l1_Nova_c = compiler_Nova_Compiler_Nova_construct(0, exceptionData);
	compiler_Nova_Compiler_Nova_compile(l1_Nova_c, exceptionData, (nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void compiler_Nova_Compiler_Nova_this(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_Nova_Compiler_Nova_compile(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_Nova_String* l1_Nova_directory = (nova_Nova_String*)nova_null;
	
	l1_Nova_directory = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(0, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))));
	if (compiler_Nova_Compiler_Nova_DEBUG)
	{
		nova_Nova_String* l1_Nova_target = (nova_Nova_String*)nova_null;
		compiler_tree_nodes_Nova_Program* l1_Nova_program = (compiler_tree_nodes_Nova_Program*)nova_null;
		nova_io_Nova_File* l1_Nova_parentDir = (nova_io_Nova_File*)nova_null;
		Context1 contextArg79 = 
		{
		};
		Context2 contextArg80 = 
		{
		};
		Context6 contextArg84 = 
		{
		};
		Context7 contextArg85 = 
		{
		};
		Context8 contextArg86 = 
		{
		};
		
		compiler_Nova_Compiler_func_Nova_testClasses(this, exceptionData);
		l1_Nova_target = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("c"));
		args = generated27(this, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../NovaCompilerOutput/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../StandardLibrary/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), l1_Nova_target);
		l1_Nova_program = compiler_tree_nodes_Nova_Program_Nova_construct(0, exceptionData, 0);
		l1_Nova_parentDir = nova_io_Nova_File_1_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../../../tempstd")));
		this->prv->compiler_Nova_Compiler_Nova_files = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_io_Nova_File_Nova_getChildFiles(l1_Nova_parentDir, exceptionData, 1, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_Nova_Compiler_Nova_testLambda79, this, &contextArg79)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_Nova_Compiler_Nova_testLambda80, this, &contextArg80));
		TRY
		{
			novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 10);
			
			{
				Context3 contextArg81 = 
				{
					&l1_Nova_program,
				};
				compiler_tree_Nova_SyntaxTree* l2_Nova_tree = (compiler_tree_Nova_SyntaxTree*)nova_null;
				nova_Nova_String* l2_Nova_separator = (nova_Nova_String*)nova_null;
				Context4 contextArg82 = 
				{
				};
				Context5 contextArg83 = 
				{
					&l2_Nova_separator,
				};
				
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->compiler_Nova_Compiler_Nova_files), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda81, this, &contextArg81);
				l2_Nova_tree = compiler_tree_Nova_SyntaxTree_Nova_construct(0, exceptionData, this, l1_Nova_program);
				compiler_tree_Nova_SyntaxTree_Nova_formTree(l2_Nova_tree, exceptionData);
				compiler_tree_Nova_SyntaxTree_Nova_validateTypes(l2_Nova_tree, exceptionData);
				compiler_tree_Nova_SyntaxTree_Nova_parseStatements(l2_Nova_tree, exceptionData);
				l2_Nova_separator = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("============================="));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Program_Accessor_Nova_files(l2_Nova_tree->compiler_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_Nova_Compiler_Nova_testLambda82, this, &contextArg82)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_Nova_Compiler_Nova_testLambda83, this, &contextArg83)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
			}
		}
		CATCH (10)
		{
			compiler_Nova_SyntaxErrorException* l3_Nova_e = (compiler_Nova_SyntaxErrorException*)nova_null;
			
			l3_Nova_e = (compiler_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		}
		FINALLY
		{
		}
		END_TRY;
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_errors), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda84, this, &contextArg84);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_warnings), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda85, this, &contextArg85);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_info), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda86, this, &contextArg86);
	}
}

void compiler_Nova_Compiler_func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* generated27(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 17);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../Compiler"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../Misc/example"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../Misc/stabilitytest"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-output-directory"));
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-package-output-directory"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova"));
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-formatc"));
	l1_Nova_temp[9] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-v"));
	l1_Nova_temp[10] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-single-thread"));
	l1_Nova_temp[11] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-single-file"));
	l1_Nova_temp[12] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-main"));
	l1_Nova_temp[13] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("compiler/Compiler"));
	l1_Nova_temp[14] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-no-optimize"));
	l1_Nova_temp[15] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-target"));
	l1_Nova_temp[16] = value16;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 17);
}

char compiler_Nova_Compiler_Nova_testLambda79(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_Nova_String_Nova_equals(nova_Nova_String_Nova_toLowerCase(nova_io_Nova_File_Accessorfunc_Nova_extension(_1, exceptionData), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova")));
}

compiler_tree_nodes_Nova_NovaFile* compiler_Nova_Compiler_Nova_testLambda80(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return compiler_tree_nodes_Nova_NovaFile_Nova_construct(0, exceptionData, _1, 0, 0);
}

void compiler_Nova_Compiler_Nova_testLambda81(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	compiler_tree_nodes_Nova_Program_Nova_addChild((*context->compiler_Nova_Compiler_Nova_program), exceptionData, (compiler_tree_nodes_Nova_Node*)(file));
}

char compiler_Nova_Compiler_Nova_testLambda82(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	return nova_Nova_String_Nova_equals(_1->compiler_tree_nodes_Nova_NovaFile_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("String")));
}

nova_Nova_String* compiler_Nova_Compiler_Nova_testLambda83(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((*context->compiler_Nova_Compiler_Nova_separator))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((file->compiler_tree_nodes_Nova_NovaFile_Nova_name)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((*context->compiler_Nova_Compiler_Nova_separator))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_util_Nova_CompilerStringFunctions_Nova_formatIndentation(compiler_tree_nodes_Nova_NovaFile_Nova_toNova(file, exceptionData), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
}

void compiler_Nova_Compiler_Nova_testLambda84(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda85(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Warning: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda86(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Info: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_super(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_Nova_Compiler_Nova_errors = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_warnings = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_info = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->compiler_Nova_Compiler_Nova_files = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_errors = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_Nova_Compiler_Nova_warnings = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_Nova_Compiler_Nova_info = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

