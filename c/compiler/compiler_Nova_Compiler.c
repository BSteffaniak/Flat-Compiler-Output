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
#include <compiler/util/compiler_util_Nova_FileUtils.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaClass.h>
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
		/* Program program */ compiler_tree_nodes_Nova_Program** compiler_Nova_Compiler_Nova_program;
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


compiler_Compiler_Extension_VTable compiler_Compiler_Extension_VTable_val =
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
				0,
				0,
		},
		nova_Nova_Object_Nova_equals,
		nova_Nova_Object_Nova_toString,
		nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



void compiler_Nova_Compiler_func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated26(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16);
nova_datastruct_list_Nova_Array* generated27(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_Nova_Compiler_Nova_testLambda52(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_Nova_Compiler_Nova_testLambda53(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void compiler_Nova_Compiler_Nova_testLambda54(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void compiler_Nova_Compiler_Nova_testLambda55(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
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
		CCLASS_NEW(compiler_Nova_Compiler, this,);
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
				nova_Nova_String* l1_Nova_input = (nova_Nova_String*)nova_null;
				compiler_tree_nodes_Nova_Program* l1_Nova_program = (compiler_tree_nodes_Nova_Program*)nova_null;
				compiler_tree_nodes_Nova_NovaFile* l1_Nova_file = (compiler_tree_nodes_Nova_NovaFile*)nova_null;
				volatile nova_datastruct_list_Nova_Stack* l1_Nova_parents = (nova_datastruct_list_Nova_Stack*)nova_null;
				compiler_tree_Nova_StatementIterator* l1_Nova_statements = (compiler_tree_Nova_StatementIterator*)nova_null;
				Context2 contextArg53 = 
				{
				};
				Context3 contextArg54 = 
				{
				};
				Context4 contextArg55 = 
				{
				};
				
				compiler_Nova_Compiler_func_Nova_testClasses(this, exceptionData);
				l1_Nova_target = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("c"));
				args = generated26(this, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../NovaCompilerOutput/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../StandardLibrary/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), l1_Nova_target);
				
				l1_Nova_input = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class Test {\n         Int x = 15\n\n         public helloWorld(String x, Int y) -> Something {\n             Console.writeLine(\"ASdfasdfads\")\n         }\n         \n         public construct() {\n             Console.writeLine(\"Constructed1\")\n             Console.writeLine(\"Constructed2\")\n             Console.writeLine(\"Constructed3\")\n             Console.writeLine(\"Constructed4\")\n             \n             Int x = 4;Int y = 4;\n             \n             \n             \n             x += 4                                 \n         }\n     }"));
				l1_Nova_program = compiler_tree_nodes_Nova_Program_Nova_construct(0, exceptionData, this);
				l1_Nova_file = compiler_tree_nodes_Nova_NovaFile_Nova_construct(0, exceptionData, nova_io_Nova_File_0_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("temp.nova"))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_program), 0);
				l1_Nova_parents = nova_datastruct_list_Nova_Stack_Nova_construct(0, exceptionData);
				l1_Nova_statements = compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_statements(l1_Nova_input, exceptionData);
				nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData, (nova_Nova_Object*)(l1_Nova_file));
				TRY
				{
						novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 10);
						
						{
								compiler_tree_Nova_StatementIterator* nova_local_0 = (compiler_tree_Nova_StatementIterator*)nova_null;
								nova_Nova_String* l3_Nova_statement = (nova_Nova_String*)nova_null;
								nova_datastruct_list_Nova_Array* l2_Nova_declarations = (nova_datastruct_list_Nova_Array*)nova_null;
								Context1 contextArg52 = 
								{
										&l1_Nova_program,
								};
								
								nova_local_0 = l1_Nova_statements;
								while (compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
								{
										compiler_tree_nodes_Nova_Node* l3_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
										
										l3_Nova_statement = (nova_Nova_String*)(compiler_tree_Nova_StatementIterator_Accessor_Nova_next(nova_local_0, exceptionData));
										nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l3_Nova_statement)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))));
										l3_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node_virtual_Nova_parseChild((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData)), exceptionData, l3_Nova_statement, 0));
										nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\tbeginsScope: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_beginsScope))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tendsScope: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_endsScope))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tparse: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l3_Nova_node)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n")))))))));
										if (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_beginsScope)
										{
												if (l3_Nova_node == (compiler_tree_nodes_Nova_Node*)nova_null)
												{
														compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse scope declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l3_Nova_statement)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData)), 0);
												}
												else
												{
														nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData, (nova_Nova_Object*)(l3_Nova_node));
												}
										}
										else if (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_endsScope)
										{
												int repeatCounter2 = 0;
												
												for (repeatCounter2 = 0; repeatCounter2 < l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_scopesEnded; repeatCounter2++)
												{
														if (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData))
														{
																nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData);
														}
												}
										}
								}
								if ((compiler_tree_nodes_Nova_Node*)nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(l1_Nova_parents), exceptionData) != (compiler_tree_nodes_Nova_Node*)l1_Nova_file)
								{
										compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing ending brace")), (compiler_tree_nodes_Nova_Node*)(l1_Nova_file), 0);
								}
								l2_Nova_declarations = generated27(this, exceptionData);
								nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l2_Nova_declarations), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda52, this, &contextArg52);
						}
				}
				CATCH (10)
				{
						compiler_Nova_SyntaxErrorException* l12_Nova_e = (compiler_Nova_SyntaxErrorException*)nova_null;
						
						l12_Nova_e = (compiler_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				}
				FINALLY
				{
				}
				END_TRY;
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_errors), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda53, this, &contextArg53);
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_warnings), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda54, this, &contextArg54);
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_Nova_Compiler_Nova_info), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_Nova_Compiler_Nova_testLambda55, this, &contextArg55);
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Args: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((args)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		}
}

void compiler_Nova_Compiler_func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* generated26(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16)
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

nova_datastruct_list_Nova_Array* generated27(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
		
		l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
		l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("private abstract class Something extends MyButt implements yo, what, up323s"));
		l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class Something2"));
		l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class Something3 extends MyButt"));
		l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class Something4 implements Annotatable"));
		return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 4);
}

void compiler_Nova_Compiler_Nova_testLambda52(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Parsed: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((compiler_tree_nodes_Nova_NovaClass_static_Nova_parse(0, exceptionData, _1, (compiler_tree_nodes_Nova_Node*)((*context->compiler_Nova_Compiler_Nova_program)), 0, (intptr_t)nova_null))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda53(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda54(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Warning: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_testLambda55(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Info: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void compiler_Nova_Compiler_Nova_super(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		this->compiler_Nova_Compiler_Nova_errors = (nova_datastruct_list_Nova_Array*)nova_null;
		this->compiler_Nova_Compiler_Nova_warnings = (nova_datastruct_list_Nova_Array*)nova_null;
		this->compiler_Nova_Compiler_Nova_info = (nova_datastruct_list_Nova_Array*)nova_null;
		this->compiler_Nova_Compiler_Nova_errors = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
		this->compiler_Nova_Compiler_Nova_warnings = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
		this->compiler_Nova_Compiler_Nova_info = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}



nova_primitive_Nova_Null* nova_null;
void* nova_garbageData;

int main(int argc, char** argvs)
{
		nova_Nova_String** args;
		int      i;
		
		nova_exception_Nova_ExceptionData* exceptionData = 0;
		srand(currentTimeMillis());
		nova_garbageData = malloc(sizeof(void*));
		nova_gc_Nova_GC_static_Nova_init(0, exceptionData);
		
		nova_null = nova_primitive_Nova_Null_Nova_construct(0, exceptionData);
		novaEnv.nova_Object.equals = nova_Object_Extension_VTable_val.nova_operators_Nova_Equals_virtual_Nova_equals;
		novaEnv.nova_Object.toString = nova_Object_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_String.concat = nova_String_Extension_VTable_val.nova_Nova_String_virtual_Nova_concat;
		novaEnv.nova_String.toString = nova_String_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Comparable_Extension_VTable_val.itable.nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo;
		novaEnv.nova_datastruct_list_Array.addUnique = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_addUnique;
		novaEnv.nova_datastruct_list_Array.map__nova_Object = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_Array.forEach__void = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_Array.filter__nova_primitive_Bool = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_Array.take = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual_Nova_take;
		novaEnv.nova_datastruct_list_Array.skip = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual_Nova_skip;
		novaEnv.nova_datastruct_list_Array.reverse = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
		novaEnv.nova_datastruct_list_Array.get = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_get;
		novaEnv.nova_datastruct_list_Array.set = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_set;
		novaEnv.nova_datastruct_list_Iterator.reset = nova_datastruct_list_Iterator_Extension_VTable_val.itable.nova_datastruct_list_Nova_Iterator_virtual_Nova_reset;
		novaEnv.nova_datastruct_list_List.toArray = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray;
		novaEnv.nova_datastruct_list_List.contains__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains;
		novaEnv.nova_datastruct_list_List.forEach__void = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_List.map__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_List.any__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_any;
		novaEnv.nova_datastruct_list_List.all__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_all;
		novaEnv.nova_datastruct_list_List.filter__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_List.take = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_take;
		novaEnv.nova_datastruct_list_List.skip = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_skip;
		novaEnv.nova_datastruct_list_List.firstWhere__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere;
		novaEnv.nova_datastruct_list_List.reverse = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
		novaEnv.nova_datastruct_list_List.join = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_join;
		novaEnv.nova_io_InputStream.readString = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readString;
		novaEnv.nova_io_InputStream.readBytes = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readBytes;
		novaEnv.nova_io_OutputStream.write__nova_String = nova_io_OutputStream_Extension_VTable_val.nova_io_Nova_OutputStream_virtual0_Nova_write;
		novaEnv.nova_io_OutputStream.write__nova_Object = nova_io_OutputStream_Extension_VTable_val.nova_io_Nova_OutputStream_virtual1_Nova_write;
		novaEnv.nova_math_NumericOperand.toString = nova_math_NumericOperand_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_math_Vector.dotProduct = nova_math_Vector_Extension_VTable_val.nova_math_Nova_Vector_virtual_Nova_dotProduct;
		novaEnv.nova_operators_Equals.equals = nova_operators_Equals_Extension_VTable_val.itable.nova_operators_Nova_Equals_virtual_Nova_equals;
		novaEnv.nova_operators_Multiply.multiply__nova_Object = nova_operators_Multiply_Extension_VTable_val.itable.nova_operators_Nova_Multiply_virtual0_Nova_multiply;
		novaEnv.nova_svg_SvgComponent.generateOutput = nova_svg_SvgComponent_Extension_VTable_val.nova_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_svg_no3_No3Node.toJs = nova_svg_no3_No3Node_Extension_VTable_val.nova_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.nova_thread_Thread.run = nova_thread_Thread_Extension_VTable_val.nova_thread_Nova_Thread_virtual_Nova_run;
		novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_SvgComponent_Extension_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_No3Node_Extension_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.compiler_tree_nodes_Abstractable.writeAbstract = compiler_tree_nodes_Abstractable_Extension_VTable_val.itable.compiler_tree_nodes_Nova_Abstractable_virtual_Nova_writeAbstract;
		novaEnv.compiler_tree_nodes_Identifier.cloneTo = compiler_tree_nodes_Identifier_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo;
		novaEnv.compiler_tree_nodes_Node.parseChild = compiler_tree_nodes_Node_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_parseChild;
		novaEnv.compiler_tree_nodes_Node.clone = compiler_tree_nodes_Node_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_clone;
		novaEnv.compiler_tree_nodes_Node.cloneTo = compiler_tree_nodes_Node_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo;
		novaEnv.compiler_tree_nodes_Value.cloneTo = compiler_tree_nodes_Value_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo;
		novaEnv.compiler_tree_nodes_annotations_Annotatable.addAnnotation = compiler_tree_nodes_annotations_Annotatable_Extension_VTable_val.itable.compiler_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation;
		novaEnv.compiler_tree_nodes_variables_InstanceDeclaration.parseModifier = compiler_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier;
		novaEnv.compiler_tree_nodes_variables_InstanceDeclaration.writeModifiers = compiler_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers;
		novaEnv.compiler_tree_nodes_variables_InstanceDeclaration.cloneTo = compiler_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo;
		novaEnv.compiler_tree_nodes_variables_VariableDeclaration.parseModifier = compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier;
		novaEnv.compiler_tree_nodes_variables_VariableDeclaration.writeModifiers = compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers;
		novaEnv.compiler_tree_nodes_variables_VariableDeclaration.toString = compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.compiler_tree_nodes_variables_VariableDeclaration.cloneTo = compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable_val.compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo;
		
		nova_Nova_Class_Nova_init_static(exceptionData);
		nova_Nova_Object_Nova_init_static(exceptionData);
		nova_Nova_String_Nova_init_static(exceptionData);
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
		nova_datastruct_Nova_Node_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Pair_Nova_init_static(exceptionData);
		nova_datastruct_Nova_ReversibleHashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tuple_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Array_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CompiledList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_EmptyStackException_Nova_init_static(exceptionData);
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
		nova_exception_Nova_Backtraces_Nova_init_static(exceptionData);
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
		nova_svg_Nova_Svg_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgCircle_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponent_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponentList_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponentNode_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgMainComponent_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3Node_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3Selection_Nova_init_static(exceptionData);
		nova_thread_Nova_Thread_Nova_init_static(exceptionData);
		nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static(exceptionData);
		nova_thread_async_Nova_Async_Nova_init_static(exceptionData);
		nova_thread_async_Nova_AsyncResult_Nova_init_static(exceptionData);
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
		compiler_Nova_Compiler_Nova_init_static(exceptionData);
		compiler_Nova_SyntaxErrorException_Nova_init_static(exceptionData);
		compiler_Nova_SyntaxMessage_Nova_init_static(exceptionData);
		compiler_error_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		compiler_tree_Nova_StatementIterator_Nova_init_static(exceptionData);
		compiler_tree_Nova_SyntaxTree_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Abstractable_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Accessible_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Identifier_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Import_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_ImportList_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Listener_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Node_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_NodeList_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_NovaClass_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_NovaFile_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_NovaInterface_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Package_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Program_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Scope_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Skeleton_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_StaticClassReference_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_ValidationResult_Nova_init_static(exceptionData);
		compiler_tree_nodes_Nova_Value_Nova_init_static(exceptionData);
		compiler_tree_nodes_annotations_Nova_Annotatable_Nova_init_static(exceptionData);
		compiler_tree_nodes_annotations_Nova_Annotation_Nova_init_static(exceptionData);
		compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_init_static(exceptionData);
		compiler_tree_nodes_closures_Nova_ClosureContext_Nova_init_static(exceptionData);
		compiler_tree_nodes_closures_Nova_ClosureDeclaration_Nova_init_static(exceptionData);
		compiler_tree_nodes_exceptionhandling_Nova_ExceptionHandler_Nova_init_static(exceptionData);
		compiler_tree_nodes_exceptionhandling_Nova_Try_Nova_init_static(exceptionData);
		compiler_tree_nodes_functions_Nova_BodyFunction_Nova_init_static(exceptionData);
		compiler_tree_nodes_functions_Nova_NovaFunction_Nova_init_static(exceptionData);
		compiler_tree_nodes_functions_Nova_Parameter_Nova_init_static(exceptionData);
		compiler_tree_nodes_functions_Nova_ParameterList_Nova_init_static(exceptionData);
		compiler_tree_nodes_generics_Nova_GenericTypeArgument_Nova_init_static(exceptionData);
		compiler_tree_nodes_operations_Nova_Operation_Nova_init_static(exceptionData);
		compiler_tree_nodes_operations_Nova_Operator_Nova_init_static(exceptionData);
		compiler_tree_nodes_operations_Nova_Operator_Nova_init_static(exceptionData);
		compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_init_static(exceptionData);
		compiler_tree_nodes_variables_Nova_FieldDeclaration_Nova_init_static(exceptionData);
		compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_init_static(exceptionData);
		compiler_tree_nodes_variables_Nova_LocalDeclaration_Nova_init_static(exceptionData);
		compiler_tree_nodes_variables_Nova_Variable_Nova_init_static(exceptionData);
		compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_init_static(exceptionData);
		compiler_util_Nova_Bounds_Nova_init_static(exceptionData);
		compiler_util_Nova_CompilerStringFunctions_Nova_init_static(exceptionData);
		compiler_util_Nova_FileUtils_Nova_init_static(exceptionData);
		compiler_util_Nova_Location_Nova_init_static(exceptionData);
		compiler_util_Nova_OS_Nova_init_static(exceptionData);
		compiler_util_Nova_OS_Nova_init_static(exceptionData);
		compiler_util_Nova_SyntaxUtils_Nova_init_static(exceptionData);
		
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
				compiler_Nova_Compiler_static_Nova_main(0, exceptionData, argsArray);
		}
		CATCH (1)
		{
				nova_exception_Nova_Exception* base = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				printf("Exception in Thread 'main': %s", base->nova_exception_Nova_Exception_Nova_message->nova_Nova_String_Nova_chars);
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
