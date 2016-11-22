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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/compiler_Nova_Compiler.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/compiler_tree_Nova_AnnotationSearchResult.h>
#include <compiler/tree/compiler_tree_Nova_StatementIterator.h>
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
} Context4;
typedef struct
{
} Context5;


compiler_tree_SyntaxTree_Extension_VTable compiler_tree_SyntaxTree_Extension_VTable_val =
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
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_Stack* compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations;
	nova_datastruct_list_Nova_Stack* compiler_tree_Nova_SyntaxTree_Nova_parents;
	
)

void compiler_tree_Nova_SyntaxTree_Nova_testLambda87(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int i, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_tree_Nova_SyntaxTree_Nova_testLambda88(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
char compiler_tree_Nova_SyntaxTree_Nova_testLambda89(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context);
void compiler_tree_Nova_SyntaxTree_Nova_testLambda90(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
char compiler_tree_Nova_SyntaxTree_Nova_testLambda91(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context5* context);
void compiler_tree_Nova_SyntaxTree_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_Nova_SyntaxTree* compiler_tree_Nova_SyntaxTree_Nova_construct(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_Nova_Compiler* compiler, compiler_tree_nodes_Nova_Program* root)
{
	CCLASS_NEW(compiler_tree_Nova_SyntaxTree, this);
	this->vtable = &compiler_tree_SyntaxTree_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_Nova_SyntaxTree_Nova_super(this, exceptionData);
	
	{
		compiler_tree_Nova_SyntaxTree_Nova_this(this, exceptionData, compiler, root);
	}
	
	return this;
}

void compiler_tree_Nova_SyntaxTree_Nova_destroy(compiler_tree_Nova_SyntaxTree** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Stack_Nova_destroy(&(*this)->prv->compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations, exceptionData);
	nova_datastruct_list_Nova_Stack_Nova_destroy(&(*this)->prv->compiler_tree_Nova_SyntaxTree_Nova_parents, exceptionData);
	NOVA_FREE((*this)->prv);
	compiler_tree_nodes_Nova_Program_Nova_destroy(&(*this)->compiler_tree_Nova_SyntaxTree_Nova_root, exceptionData);
	
	compiler_Nova_Compiler_Nova_destroy(&(*this)->compiler_tree_Nova_SyntaxTree_Nova_compiler, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_Nova_SyntaxTree_Nova_this(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_Nova_Compiler* compiler, compiler_tree_nodes_Nova_Program* root)
{
	this->prv->compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations = nova_datastruct_list_Nova_Stack_Nova_construct(0, exceptionData);
	this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents = nova_datastruct_list_Nova_Stack_Nova_construct(0, exceptionData);
	this->compiler_tree_Nova_SyntaxTree_Nova_phase = 1;
	this->compiler_tree_Nova_SyntaxTree_Nova_compiler = compiler;
	this->compiler_tree_Nova_SyntaxTree_Nova_root = root;
	root->compiler_tree_nodes_Nova_Program_Nova_tree = this;
}

void compiler_tree_Nova_SyntaxTree_Nova_formTree(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg87 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Program_Accessor_Nova_files(this->compiler_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_Nova_SyntaxTree_Nova_testLambda87, this, &contextArg87);
	this->compiler_tree_Nova_SyntaxTree_Nova_phase = 2;
}

void compiler_tree_Nova_SyntaxTree_Nova_validateTypes(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg89 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Program_Accessor_Nova_files(this->compiler_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_Nova_SyntaxTree_Nova_testLambda88, this, &contextArg89);
	this->compiler_tree_Nova_SyntaxTree_Nova_phase = 3;
}

void compiler_tree_Nova_SyntaxTree_Nova_parseStatements(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4 contextArg91 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Program_Accessor_Nova_files(this->compiler_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_Nova_SyntaxTree_Nova_testLambda90, this, &contextArg91);
	this->compiler_tree_Nova_SyntaxTree_Nova_phase = 4;
}

compiler_tree_Nova_AnnotationSearchResult* compiler_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	compiler_tree_Nova_AnnotationSearchResult* l1_Nova_result = (compiler_tree_Nova_AnnotationSearchResult*)nova_null;
	compiler_tree_nodes_annotations_Nova_Annotation* l1_Nova_annotation = (compiler_tree_nodes_annotations_Nova_Annotation*)nova_null;
	
	l1_Nova_result = compiler_tree_Nova_AnnotationSearchResult_Nova_construct(0, exceptionData, statement);
	l1_Nova_annotation = compiler_tree_nodes_annotations_Nova_Annotation_static_Nova_parse(0, exceptionData, statement, 0, 0, 0);
	while ((nova_Nova_Object*)l1_Nova_annotation != (nova_Nova_Object*)(compiler_tree_nodes_annotations_Nova_Annotation*)nova_null && statement->nova_Nova_String_Nova_count > 0)
	{
		statement = compiler_tree_nodes_annotations_Nova_Annotation_Nova_getRemainingStatement(l1_Nova_annotation, exceptionData, statement);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_result->compiler_tree_Nova_AnnotationSearchResult_Nova_annotations), exceptionData, (nova_Nova_Object*)(l1_Nova_annotation));
		l1_Nova_result->compiler_tree_Nova_AnnotationSearchResult_Nova_remainingStatement = statement;
		if (statement->nova_Nova_String_Nova_count > 0)
		{
			l1_Nova_annotation = compiler_tree_nodes_annotations_Nova_Annotation_static_Nova_parse(0, exceptionData, statement, 0, 0, (intptr_t)nova_null);
		}
	}
	return l1_Nova_result;
}

void compiler_tree_Nova_SyntaxTree_Nova_testLambda87(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int i, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	compiler_tree_Nova_StatementIterator* l1_Nova_statements = (compiler_tree_Nova_StatementIterator*)nova_null;
	compiler_tree_Nova_StatementIterator* nova_local_0 = (compiler_tree_Nova_StatementIterator*)nova_null;
	nova_Nova_String* l2_Nova_statement = (nova_Nova_String*)nova_null;
	
	l1_Nova_statements = compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_statements(file->compiler_tree_nodes_Nova_NovaFile_Nova_source, exceptionData);
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData, (nova_Nova_Object*)(file));
	nova_local_0 = l1_Nova_statements;
	while (compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		nova_Nova_String* l2_Nova_full = (nova_Nova_String*)nova_null;
		volatile compiler_tree_nodes_Nova_Node* l2_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
		compiler_tree_Nova_AnnotationSearchResult* l2_Nova_annotations = (compiler_tree_Nova_AnnotationSearchResult*)nova_null;
		
		l2_Nova_statement = (nova_Nova_String*)(compiler_tree_Nova_StatementIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData))
		{
			break;
		}
		l2_Nova_full = l2_Nova_statement;
		l2_Nova_node = (compiler_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
		l2_Nova_annotations = compiler_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(0, exceptionData, l2_Nova_statement);
		compiler_tree_Nova_AnnotationSearchResult_1_Nova_addTo(l2_Nova_annotations, exceptionData, this->prv->compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations);
		l2_Nova_statement = l2_Nova_annotations->compiler_tree_Nova_AnnotationSearchResult_Nova_remainingStatement;
		if (l2_Nova_statement->nova_Nova_String_Nova_count > 0)
		{
			TRY
			{
				novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 10);
				
				{
					l2_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node_virtual_Nova_parseStatement((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData)), exceptionData, l2_Nova_statement, 0, 0, 0));
				}
			}
			CATCH (10)
			{
				compiler_Nova_SyntaxErrorException* l6_Nova_e = (compiler_Nova_SyntaxErrorException*)nova_null;
				
				l6_Nova_e = (compiler_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(l6_Nova_e));
			}
			FINALLY
			{
			}
			END_TRY;
			if (l2_Nova_node == (compiler_tree_nodes_Nova_Node*)nova_null)
			{
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l2_Nova_full)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\tbeginsScope: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_beginsScope))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tendsScope: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_endsScope))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tparse: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_node)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n")))))))));
			}
			if (l2_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null)
			{
				while (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations), exceptionData))
				{
					compiler_tree_nodes_Nova_Node_Nova_addAnnotation((compiler_tree_nodes_Nova_Node*)l2_Nova_node, exceptionData, (compiler_tree_nodes_annotations_Nova_Annotation*)(nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations), exceptionData)));
				}
				compiler_tree_nodes_Nova_Node_virtual_Nova_addChild((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData)), exceptionData, (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node*)l2_Nova_node);
			}
		}
		else
		{
		}
		if (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_beginsScope)
		{
			if (l2_Nova_node == (compiler_tree_nodes_Nova_Node*)nova_null)
			{
				compiler_tree_nodes_Nova_Node* l12_Nova_nova_local_1 = (compiler_tree_nodes_Nova_Node*)nova_null;
				
				compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse scope declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l2_Nova_statement)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)((l12_Nova_nova_local_1 = (compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData))) != (compiler_tree_nodes_Nova_Node*)nova_null ? l12_Nova_nova_local_1 : (compiler_tree_nodes_Nova_Node*)this->compiler_tree_Nova_SyntaxTree_Nova_root), 0);
				l2_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData)), exceptionData));
			}
			nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)((compiler_tree_nodes_Nova_Node*)l2_Nova_node));
		}
		if (l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_endsScope)
		{
			int repeatCounter2 = 0;
			
			for (repeatCounter2 = 0; repeatCounter2 < l1_Nova_statements->compiler_tree_Nova_StatementIterator_Nova_scopesEnded; repeatCounter2++)
			{
				if (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData))
				{
					nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData);
				}
			}
		}
	}
	if ((compiler_tree_nodes_Nova_Node*)nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents), exceptionData) != (compiler_tree_nodes_Nova_Node*)file)
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing ending brace")), (compiler_tree_nodes_Nova_Node*)(file), 0);
	}
}

void compiler_tree_Nova_SyntaxTree_Nova_testLambda88(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	Context3 contextArg88 = 
	{
	};
	
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(file->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_Nova_SyntaxTree_Nova_testLambda89, this, &contextArg88, 0))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("invalid types")));
	}
}

char compiler_tree_Nova_SyntaxTree_Nova_testLambda89(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context)
{
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes(_1, exceptionData);
}

void compiler_tree_Nova_SyntaxTree_Nova_testLambda90(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	Context5 contextArg90 = 
	{
	};
	
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(file->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_Nova_SyntaxTree_Nova_testLambda91, this, &contextArg90, 0))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("failed to parse placeholders")));
	}
}

char compiler_tree_Nova_SyntaxTree_Nova_testLambda91(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context5* context)
{
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders(_1, exceptionData);
}

void compiler_tree_Nova_SyntaxTree_Nova_super(compiler_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_Nova_SyntaxTree_Nova_root = (compiler_tree_nodes_Nova_Program*)nova_null;
	this->compiler_tree_Nova_SyntaxTree_Nova_phase = 0;
	this->compiler_tree_Nova_SyntaxTree_Nova_compiler = (compiler_Nova_Compiler*)nova_null;
	this->prv->compiler_tree_Nova_SyntaxTree_Nova_pendingAnnotations = (nova_datastruct_list_Nova_Stack*)nova_null;
	this->prv->compiler_tree_Nova_SyntaxTree_Nova_parents = (nova_datastruct_list_Nova_Stack*)nova_null;
}

