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
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_NovaFunction.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaClass.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Int phase */ int* compiler_tree_nodes_Nova_Node_Nova_phase;
} Context1;
typedef struct
{
	/* String name */ nova_Nova_String** compiler_tree_nodes_Nova_Node_Nova_name;
} Context2;


compiler_tree_nodes_Node_Extension_VTable compiler_tree_nodes_Node_Extension_VTable_val =
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
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_parseChild,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
};



void compiler_tree_nodes_Nova_Node_1_Nova_detach(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* fromNode);
compiler_tree_nodes_Nova_ValidationResult* compiler_tree_nodes_Nova_Node_Nova_testLambda56(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* _1, Context1* context);
char compiler_tree_nodes_Nova_Node_Nova_testLambda57(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_VariableDeclaration* _1, Context2* context);






















void compiler_tree_nodes_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_construct(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Node, this,);
	this->vtable = &compiler_tree_nodes_Node_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Node_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Node_Nova_destroy(compiler_tree_nodes_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_util_Nova_Location_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Node_Nova_location, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Node_Nova_annotations, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Node_Nova_parent, exceptionData);
	
	NOVA_FREE(*this);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_getAdjacentNode(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int offset)
{
	if (this->compiler_tree_nodes_Nova_Node_Nova_parent != (compiler_tree_nodes_Nova_Node*)nova_null)
	{
		int l1_Nova_index = 0;
		
		l1_Nova_index = compiler_tree_nodes_Nova_Node_Accessor_Nova_index(this, exceptionData) + offset;
		if (l1_Nova_index >= 0 && l1_Nova_index < compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->compiler_tree_nodes_Nova_NodeList_Nova_children->nova_datastruct_list_Nova_Array_Nova_count)
		{
			return (compiler_tree_nodes_Nova_Node*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, l1_Nova_index);
		}
	}
	return (compiler_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

void compiler_tree_nodes_Nova_Node_Nova_this(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	this->compiler_tree_nodes_Nova_Node_Nova_parent = parent;
	this->compiler_tree_nodes_Nova_Node_Nova_location = location;
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_parseChild(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (compiler_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

void compiler_tree_nodes_Nova_Node_Nova_addAnnotation(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* annotation)
{
	nova_datastruct_list_Nova_Array* l1_Nova_nova_local_0 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	this->compiler_tree_nodes_Nova_Node_Nova_annotations = (nova_datastruct_list_Nova_Array*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null ? l1_Nova_nova_local_0 : nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_Node_Nova_annotations), exceptionData, (nova_Nova_Object*)(annotation));
	annotation->compiler_tree_nodes_Nova_Node_Nova_parent = this;
}

void compiler_tree_nodes_Nova_Node_0_Nova_detach(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (compiler_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(this, exceptionData))
	{
		return;
	}
	compiler_tree_nodes_Nova_Node_1_Nova_detach(this, exceptionData, this->compiler_tree_nodes_Nova_Node_Nova_parent);
}

void compiler_tree_nodes_Nova_Node_1_Nova_detach(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* fromNode)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_p = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	l1_Nova_p = this->compiler_tree_nodes_Nova_Node_Nova_parent;
	this->compiler_tree_nodes_Nova_Node_Nova_parent = (compiler_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	compiler_tree_nodes_Nova_Node_Nova_onChildDetached(l1_Nova_p, exceptionData, this);
	compiler_tree_nodes_Nova_Node_Nova_onRemoved(this, exceptionData, fromNode);
}

void compiler_tree_nodes_Nova_Node_Nova_onAdded(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent)
{
}

void compiler_tree_nodes_Nova_Node_Nova_onRemoved(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* from)
{
}

char compiler_tree_nodes_Nova_Node_Nova_onAfterDecoded(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char compiler_tree_nodes_Nova_Node_Nova_onNextStatementDecoded(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* next)
{
	return 1;
}

void compiler_tree_nodes_Nova_Node_Nova_onStackPopped(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_tree_nodes_Nova_Node_Nova_followedByScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, char scope)
{
}

void compiler_tree_nodes_Nova_Node_Nova_onChildReplaced(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* old, compiler_tree_nodes_Nova_Node* replacement)
{
}

void compiler_tree_nodes_Nova_Node_Nova_onReplaced(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_tree_nodes_Nova_Node* replacement)
{
}

void compiler_tree_nodes_Nova_Node_Nova_onChildDetached(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
}

compiler_tree_nodes_Nova_ValidationResult* compiler_tree_nodes_Nova_Node_Nova_validate(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int phase)
{
	Context1 contextArg56 = 
	{
		&phase,
	};
	compiler_tree_nodes_Nova_ValidationResult* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_ValidationResult*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_nova_local_1 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	return (compiler_tree_nodes_Nova_ValidationResult*)((l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_ValidationResult*)((l1_Nova_nova_local_1 = this->compiler_tree_nodes_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null ? (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_firstNonNull((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(l1_Nova_nova_local_1), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure21_Nova_func)&compiler_tree_nodes_Nova_Node_Nova_testLambda56, this, &contextArg56)) : (nova_Nova_Object*)nova_null)) != (compiler_tree_nodes_Nova_ValidationResult*)nova_null ? l1_Nova_nova_local_0 : compiler_tree_nodes_Nova_ValidationResult_Nova_construct(0, exceptionData, this));
}

compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	if (compiler_tree_nodes_Nova_Node_Accessor_Nova_containsScope(this, exceptionData))
	{
		compiler_tree_nodes_Nova_Scope* l1_Nova_declaration = (compiler_tree_nodes_Nova_Scope*)nova_null;
		Context2 contextArg57 = 
		{
			&name,
		};
		
		l1_Nova_declaration = (compiler_tree_nodes_Nova_Scope*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((compiler_tree_nodes_Nova_Node*)(this), exceptionData)->compiler_tree_nodes_Nova_Scope_Nova_declarations), exceptionData, (nova_datastruct_list_Nova_List_closure18_Nova_func)&compiler_tree_nodes_Nova_Node_Nova_testLambda57, this, &contextArg57));
		if (l1_Nova_declaration != (compiler_tree_nodes_Nova_Scope*)nova_null)
		{
			return (compiler_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_declaration;
		}
	}
	if (searchAncestors)
	{
		return compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration(this->compiler_tree_nodes_Nova_Node_Nova_parent, exceptionData, name, searchAncestors);
	}
	return (compiler_tree_nodes_variables_Nova_VariableDeclaration*)(nova_Nova_Object*)nova_null;
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_clone(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int cloneChildren)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	cloneChildren = (int)(cloneChildren == (intptr_t)nova_null ? 1 : cloneChildren);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_cloneTo(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* other)
{
	other->compiler_tree_nodes_Nova_Node_Nova_parent = this->compiler_tree_nodes_Nova_Node_Nova_parent;
	other->compiler_tree_nodes_Nova_Node_Nova_location = this->compiler_tree_nodes_Nova_Node_Nova_location;
	other->compiler_tree_nodes_Nova_Node_Nova_annotations = this->compiler_tree_nodes_Nova_Node_Nova_annotations;
	return other;
}

compiler_tree_nodes_Nova_ValidationResult* compiler_tree_nodes_Nova_Node_Nova_testLambda56(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* _1, Context1* context)
{
	compiler_tree_nodes_Nova_ValidationResult* l1_Nova_result = (compiler_tree_nodes_Nova_ValidationResult*)nova_null;
	
	l1_Nova_result = compiler_tree_nodes_Nova_Node_Nova_validate((compiler_tree_nodes_Nova_Node*)(_1), exceptionData, (*context->compiler_tree_nodes_Nova_Node_Nova_phase));
	return (compiler_tree_nodes_Nova_ValidationResult*)(compiler_tree_nodes_Nova_ValidationResult_Accessor_Nova_skipValidation(l1_Nova_result, exceptionData) ? (nova_Nova_Object*)l1_Nova_result : (nova_Nova_Object*)nova_null);
}

char compiler_tree_nodes_Nova_Node_Nova_testLambda57(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_VariableDeclaration* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(_1->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->compiler_tree_nodes_Nova_Node_Nova_name));
}

nova_Nova_String* compiler_tree_nodes_Nova_Node_Accessor_Nova_locationInfo(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_info = (nova_Nova_String*)nova_null;
	
	l1_Nova_info = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	if (compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData) != (compiler_tree_nodes_Nova_NovaFile*)nova_null)
	{
		l1_Nova_info = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_info), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("in file ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData)->compiler_tree_nodes_Nova_NovaFile_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	}
	if (this->compiler_tree_nodes_Nova_Node_Nova_location != (compiler_util_Nova_Location*)nova_null)
	{
		l1_Nova_info = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_info), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l1_Nova_info->nova_Nova_String_Nova_count > 0 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("on line number ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->compiler_tree_nodes_Nova_Node_Nova_location->compiler_util_Nova_Location_Nova_lineNumber))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" at offset ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->compiler_tree_nodes_Nova_Node_Nova_location->compiler_util_Nova_Location_Nova_offset))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
	}
	return l1_Nova_info;
}


compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (this->compiler_tree_nodes_Nova_Node_Nova_parent == (compiler_tree_nodes_Nova_Node*)nova_null)
	{
		return (compiler_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
	}
	return (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Node_Accessor_Nova_containsScope(this->compiler_tree_nodes_Nova_Node_Nova_parent, exceptionData) ? (compiler_tree_nodes_Nova_Node*)compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_Nova_Node_Nova_parent), exceptionData) : compiler_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(this->compiler_tree_nodes_Nova_Node_Nova_parent, exceptionData));
}


int compiler_tree_nodes_Nova_Node_Accessor_Nova_index(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(this));
}

int compiler_tree_nodes_Nova_Node_Mutator_Nova_index(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	nova_datastruct_list_Nova_Array_Nova_swap((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, compiler_tree_nodes_Nova_Node_Accessor_Nova_index(this, exceptionData), value);
	return value;
}

char compiler_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isValid(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_Nova_Node_Nova_parent != (compiler_tree_nodes_Nova_Node*)nova_null;
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isUserMade(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinStaticContext(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_nodes_Nova_Node*)(this), exceptionData) == (nova_Nova_Object*)(compiler_tree_nodes_functions_Nova_NovaFunction*)nova_null || !compiler_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isInstance((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData);
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (char)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(l1_Nova_nova_local_0, exceptionData)) : 0);
}


compiler_tree_nodes_Nova_Program* compiler_tree_nodes_Nova_Node_Accessor_Nova_program(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (compiler_tree_nodes_Nova_Program*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((compiler_tree_nodes_Nova_Node*)(l1_Nova_nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (compiler_tree_nodes_Nova_NovaFile*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(l1_Nova_nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinFile(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData) != (compiler_tree_nodes_Nova_NovaFile*)nova_null;
}


compiler_tree_nodes_functions_Nova_NovaFunction* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (compiler_tree_nodes_functions_Nova_NovaFunction*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_nodes_Nova_Node*)(l1_Nova_nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinFunction(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_nodes_Nova_Node*)(this), exceptionData) != (compiler_tree_nodes_functions_Nova_NovaFunction*)nova_null;
}


compiler_tree_nodes_exceptionhandling_Nova_Try* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (compiler_tree_nodes_exceptionhandling_Nova_Try*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry((compiler_tree_nodes_Nova_Node*)(l1_Nova_nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinTry(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry((compiler_tree_nodes_Nova_Node*)(this), exceptionData) != (compiler_tree_nodes_exceptionhandling_Nova_Try*)nova_null;
}


compiler_tree_nodes_Nova_NovaClass* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (compiler_tree_nodes_Nova_NovaClass*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_nodes_Nova_Node*)(l1_Nova_nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinClass(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_nodes_Nova_Node*)(this), exceptionData) != (compiler_tree_nodes_Nova_NovaClass*)nova_null;
}


compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	return (compiler_tree_nodes_Nova_Scope*)((l1_Nova_nova_local_0 = this->compiler_tree_nodes_Nova_Node_Nova_parent) != (compiler_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(l1_Nova_nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData) != (compiler_tree_nodes_Nova_Scope*)nova_null;
}


compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_Accessor_Nova_scope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_nodes_Nova_Scope*)(nova_Nova_Object*)nova_null;
}


char compiler_tree_nodes_Nova_Node_Accessor_Nova_containsScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((compiler_tree_nodes_Nova_Node*)(this), exceptionData) != (compiler_tree_nodes_Nova_Scope*)nova_null;
}


compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_next(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_Nova_getAdjacentNode(this, exceptionData, 1);
}


compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_previous(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Node_Nova_getAdjacentNode(this, exceptionData, -1);
}


void compiler_tree_nodes_Nova_Node_Nova_super(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Node_Nova_location = (compiler_util_Nova_Location*)nova_null;
	this->compiler_tree_nodes_Nova_Node_Nova_annotations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_Node_Nova_parent = (compiler_tree_nodes_Nova_Node*)nova_null;
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Nova_parseChild(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement, int require)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Nova_parseChild((compiler_tree_nodes_Nova_Node*)(this), exceptionData, statement, require);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Nova_clone(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int cloneChildren)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Nova_clone((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location, cloneChildren);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* other)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo((compiler_tree_nodes_Nova_Node*)(this), exceptionData, other);
}

compiler_tree_nodes_Nova_Program* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((compiler_tree_nodes_Nova_Node*)(this), exceptionData);
}

compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData);
}

compiler_tree_nodes_functions_Nova_NovaFunction* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_nodes_Nova_Node*)(this), exceptionData);
}

compiler_tree_nodes_exceptionhandling_Nova_Try* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry((compiler_tree_nodes_Nova_Node*)(this), exceptionData);
}

compiler_tree_nodes_Nova_NovaClass* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_nodes_Nova_Node*)(this), exceptionData);
}

compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((compiler_tree_nodes_Nova_Node*)(this), exceptionData);
}

