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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <compiler/util/compiler_util_Nova_FileUtils.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/compiler_tree_Nova_StatementIterator.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* File parentDir */ nova_io_Nova_File** compiler_Nova_Compiler_Nova_parentDir;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* String separator */ nova_Nova_String** compiler_Nova_Compiler_Nova_separator;
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
} Context9;
typedef struct
{
} Context10;
typedef struct
{
} Context11;


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
	nova_datastruct_list_Nova_Stack* compiler_Nova_Compiler_Nova_parents;
	compiler_tree_nodes_Nova_Program* compiler_Nova_Compiler_Nova_program;
	nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_files;
	
)

void compiler_Nova_Compiler_func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_Nova_Compiler_Nova_formTree(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* files);
void compiler_Nova_Compiler_Nova_validateTypes(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* files);
void compiler_Nova_Compiler_Nova_parseStatements(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* files);
nova_datastruct_list_Nova_Array* generated27(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16);
compiler_tree_nodes_Nova_NovaFile* compiler_Nova_Compiler_Nova_testLambda73(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_Nova_Compiler_Nova_testLambda74(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
nova_Nova_String* compiler_Nova_Compiler_Nova_testLambda75(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void compiler_Nova_Compiler_Nova_testLambda76(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
void compiler_Nova_Compiler_Nova_testLambda77(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
void compiler_Nova_Compiler_Nova_testLambda78(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
void compiler_Nova_Compiler_Nova_testLambda79(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int i, nova_datastruct_list_Nova_Array* _3, Context7* context);
void compiler_Nova_Compiler_Nova_testLambda80(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
char compiler_Nova_Compiler_Nova_testLambda81(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context9* context);
void compiler_Nova_Compiler_Nova_testLambda82(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context);
char compiler_Nova_Compiler_Nova_testLambda83(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context11* context);
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
	
	nova_datastruct_list_Nova_Stack_Nova_destroy(&(*this)->prv->compiler_Nova_Compiler_Nova_parents, exceptionData);
	compiler_tree_nodes_Nova_Program_Nova_destroy(&(*this)->prv->compiler_Nova_Compiler_Nova_program, exceptionData);
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
		nova_io_Nova_File* l1_Nova_parentDir = (nova_io_Nova_File*)nova_null;
		Context1 contextArg73 = 
		{
			&l1_Nova_parentDir,
		};
		Context4 contextArg76 = 
		{
		};
		Context5 contextArg77 = 
		{
		};
		Context6 contextArg78 = 
		{
		};
		
		compiler_Nova_Compiler_func_Nova_testClasses(this, exceptionData);
		l1_Nova_target = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("c"));
		args = generated27(this, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../NovaCompilerOutput/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../StandardLibrary/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), l1_Nova_target);
		this->prv->compiler_Nova_Compiler_Nova_program = compiler_tree_nodes_Nova_Program_Nova_construct(0, exceptionData, this);
		this->prv->compiler_Nova_Compiler_Nova_parents = nova_datastruct_list_Nova_Stack_Nova_construct(0, exceptionData);
		l1_Nova_parentDir = nova_io_Nova_File_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../../../tempstd")));
		this->prv->compiler_Nova_Compiler_Nova_files = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_io_Nova_File_Nova_listFiles(l1_Nova_parentDir, exceptionData, l1_Nova_parentDir->nova_io_Nova_File_Nova_location)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_Nova_Compiler_Nova_testLambda73, this, &contextArg73));
		TRY
		{
			novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 10);
			
			{
				Context2 contextArg74 = 
				{
				};
				nova_Nova_String* l2_Nova_separator = (nova_Nova_String*)nova_null;
				nova_Nova_String* l2_Nova_a = (nova_Nova_String*)nova_null;
				Context3 contextArg75 = 
				{
					&l2_Nova_separator,
				};
				
				this->compiler_Nova_Compiler_Nova_phase = 1;
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->compiler_Nova_Compiler_Nova_files), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda74, this, &contextArg74);
				compiler_Nova_Compiler_Nova_formTree(this, exceptionData, this->prv->compiler_Nova_Compiler_Nova_files);
				this->compiler_Nova_Compiler_Nova_phase++;
				compiler_Nova_Compiler_Nova_validateTypes(this, exceptionData, this->prv->compiler_Nova_Compiler_Nova_files);
				this->compiler_Nova_Compiler_Nova_phase++;
				compiler_Nova_Compiler_Nova_parseStatements(this, exceptionData, this->prv->compiler_Nova_Compiler_Nova_files);
				l2_Nova_separator = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=============================================================="));
				l2_Nova_a = (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->prv->compiler_Nova_Compiler_Nova_files), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_Nova_Compiler_Nova_testLambda75, this, &contextArg75)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l2_Nova_separator)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, l2_Nova_a));
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
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_errors), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda76, this, &contextArg76);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_warnings), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda77, this, &contextArg77);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_info), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda78, this, &contextArg78);
	}
}

void compiler_Nova_Compiler_func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_Nova_Compiler_Nova_formTree(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* files)
{
	Context7 contextArg79 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(files), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda79, this, &contextArg79);
}

void compiler_Nova_Compiler_Nova_validateTypes(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* files)
{
	Context8 contextArg81 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(files), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda80, this, &contextArg81);
}

void compiler_Nova_Compiler_Nova_parseStatements(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* files)
{
	Context10 contextArg83 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(files), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda82, this, &contextArg83);
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

compiler_tree_nodes_Nova_NovaFile* compiler_Nova_Compiler_Nova_testLambda73(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return compiler_tree_nodes_Nova_NovaFile_Nova_construct(0, exceptionData, nova_io_Nova_File_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((*context->compiler_Nova_Compiler_Nova_parentDir)->nova_io_Nova_File_Nova_location), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))), exceptionData, _1))), 0, 0);
}

void compiler_Nova_Compiler_Nova_testLambda74(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	compiler_tree_nodes_Nova_Program_Nova_addChild(this->prv->compiler_Nova_Compiler_Nova_program, exceptionData, (compiler_tree_nodes_Nova_Node*)(file));
	file->compiler_tree_nodes_Nova_Node_Nova_parent = (compiler_tree_nodes_Nova_Node*)(this->prv->compiler_Nova_Compiler_Nova_program);
}

nova_Nova_String* compiler_Nova_Compiler_Nova_testLambda75(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_NovaFile_Nova_toNova(_1, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, ((*context->compiler_Nova_Compiler_Nova_separator)))));
}

void compiler_Nova_Compiler_Nova_testLambda76(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda77(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Warning: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda78(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Info: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda79(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int i, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
	compiler_tree_Nova_StatementIterator* l1_Nova_statements = (compiler_tree_Nova_StatementIterator*)nova_null;
	compiler_tree_Nova_StatementIterator* nova_local_0 = (compiler_tree_Nova_StatementIterator*)nova_null;
	nova_Nova_String* l2_Nova_statement = (nova_Nova_String*)nova_null;
	
	l1_Nova_statements = compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_statements(file->compiler_tree_nodes_Nova_NovaFile_Nova_source, exceptionData);
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData, (nova_Nova_Object*)(file));
	nova_local_0 = l1_Nova_statements;
	while (compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		compiler_tree_nodes_Nova_Node* l2_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
		
		l2_Nova_statement = (nova_Nova_String*)(compiler_tree_Nova_StatementIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l2_Nova_statement)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))));
		l2_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node_virtual_Nova_parseStatement((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData)), exceptionData, l2_Nova_statement, 0, 0, 0));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\tbeginsScope: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_beginsScope))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tendsScope: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_endsScope))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tparse: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_node)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n")))))))));
		if (l2_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null)
		{
			compiler_tree_nodes_Nova_Node_virtual_Nova_addChild((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData)), exceptionData, l2_Nova_node);
		}
		if (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_beginsScope)
		{
			if (l2_Nova_node == (compiler_tree_nodes_Nova_Node*)nova_null)
			{
				compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse scope declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l2_Nova_statement)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData)), 0);
			}
			else
			{
				nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData, (nova_Nova_Object*)(l2_Nova_node));
			}
		}
		if (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_endsScope)
		{
			int repeatCounter2 = 0;
			
			for (repeatCounter2 = 0; repeatCounter2 < l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_scopesEnded; repeatCounter2++)
			{
				if (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData))
				{
					nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData);
				}
			}
		}
	}
	if ((compiler_tree_nodes_Nova_Node*)nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_Nova_Compiler_Nova_parents), exceptionData) != (compiler_tree_nodes_Nova_Node*)file)
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing ending brace")), (compiler_tree_nodes_Nova_Node*)(file), 0);
	}
}

void compiler_Nova_Compiler_Nova_testLambda80(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
	Context9 contextArg80 = 
	{
	};
	
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(file->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_Nova_Compiler_Nova_testLambda81, this, &contextArg80, 0))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("invalid types")));
	}
}

char compiler_Nova_Compiler_Nova_testLambda81(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context9* context)
{
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes(_1, exceptionData);
}

void compiler_Nova_Compiler_Nova_testLambda82(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context)
{
	Context11 contextArg82 = 
	{
	};
	
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(file->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_Nova_Compiler_Nova_testLambda83, this, &contextArg82, 0))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("failed to parse placeholders")));
	}
}

char compiler_Nova_Compiler_Nova_testLambda83(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context11* context)
{
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders(_1, exceptionData);
}

void compiler_Nova_Compiler_Nova_super(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_Nova_Compiler_Nova_errors = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_warnings = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_info = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_phase = 0;
	this->prv->compiler_Nova_Compiler_Nova_parents = (nova_datastruct_list_Nova_Stack*)nova_null;
	this->prv->compiler_Nova_Compiler_Nova_program = (compiler_tree_nodes_Nova_Program*)nova_null;
	this->prv->compiler_Nova_Compiler_Nova_files = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_Nova_Compiler_Nova_errors = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_Nova_Compiler_Nova_warnings = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_Nova_Compiler_Nova_info = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

