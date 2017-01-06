#ifndef FILE_spectra_tree_nodes_Nova_Node_NOVA
#define FILE_spectra_tree_nodes_Nova_Node_NOVA

typedef struct spectra_tree_nodes_Nova_Node spectra_tree_nodes_Nova_Node;
typedef struct spectra_tree_nodes_Nova_NodeFunctionMap spectra_tree_nodes_Nova_NodeFunctionMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef void (*spectra_tree_nodes_Nova_Node_closure1_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure2_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure3_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure4_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure5_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure6_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure7_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_Node_closure8_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_NodeFunctionMap_closure9_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*spectra_tree_nodes_Nova_NodeFunctionMap_closure10_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_Node, 
	
	spectra_tree_nodes_Node_Extension_VTable* vtable;
	spectra_util_Nova_Location* spectra_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Node_Nova_annotations;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parent;
)

void spectra_tree_nodes_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_construct(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_Node_Nova_destroy(spectra_tree_nodes_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int offset);
void spectra_tree_nodes_Nova_Node_Nova_this(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_Node_Nova_addAnnotation(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* annotation);
void spectra_tree_nodes_Nova_Node_0_Nova_detach(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Node_Nova_addChild(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child);
void spectra_tree_nodes_Nova_Node_Nova_onAdded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent);
void spectra_tree_nodes_Nova_Node_Nova_onRemoved(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* from);
char spectra_tree_nodes_Nova_Node_Nova_onAfterDecoded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Nova_onNextStatementDecoded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* next);
void spectra_tree_nodes_Nova_Node_Nova_onStackPopped(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Node_Nova_followedByScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, char scope);
void spectra_tree_nodes_Nova_Node_Nova_onChildReplaced(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* old, spectra_tree_nodes_Nova_Node* replacement);
void spectra_tree_nodes_Nova_Node_Nova_onReplaced(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_tree_nodes_Nova_Node* replacement);
void spectra_tree_nodes_Nova_Node_Nova_onChildDetached(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child);
spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_Node_Nova_validate(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int phase);
spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parseStatement(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Node_static_Nova_strictParse(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node_closure4_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
void spectra_tree_nodes_Nova_Node_static_Nova_catchSyntaxErrors(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node_closure8_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_clone(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int cloneChildren);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_cloneTo(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* other);
char spectra_tree_nodes_Nova_Node_Nova_replace(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement);
char spectra_tree_nodes_Nova_Node_Nova_validateTypes(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* nodes);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_writeAnnotations(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_toNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_writeNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_toString(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Accessor_Nova_locationInfo(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Accessor_Nova_nodeType(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Accessor_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Mutator_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value);
int spectra_tree_nodes_Nova_Node_Accessor_Nova_index(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
int spectra_tree_nodes_Nova_Node_Mutator_Nova_index(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isValid(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isUserMade(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinStaticContext(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_Node_Accessor_Nova_program(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_phase(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinFile(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinFunction(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_exceptionhandling_Nova_Try* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinTry(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinClass(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_Accessor_Nova_containsScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_next(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_previous(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Node_Nova_super(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Node_virtual_Nova_addChild(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child);
void spectra_tree_nodes_Nova_Node_virtual_Nova_onAdded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent);
spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* other);
char spectra_tree_nodes_Nova_Node_virtual_Nova_replace(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement);
char spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* nodes);
nova_Nova_String* spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_virtual_Nova_toNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value);
int spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_exceptionhandling_Nova_Try* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_NodeFunctionMap, 
	
	spectra_tree_nodes_Node_NodeFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NodeFunctionMap* spectra_tree_nodes_Nova_NodeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NodeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_this(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMapNodeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_getAdjacentNode(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, int offset);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_addAnnotation(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_annotations_Nova_Annotation* annotation);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap0_Nova_detach(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* child);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onAdded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onRemoved(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* from);
char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onAfterDecoded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onNextStatementDecoded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* next);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onStackPopped(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_followedByScope(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, char scope);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onChildReplaced(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* old, spectra_tree_nodes_Nova_Node* replacement);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onReplaced(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent, spectra_tree_nodes_Nova_Node* replacement);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onChildDetached(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* child);
spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_validate(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, int phase);
spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* name, char searchAncestors);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_static_Nova_strictParse(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeFunctionMap_closure9_Nova_action spectra_tree_nodes_Nova_NodeFunctionMap_Nova_action, void* spectra_tree_nodes_Nova_NodeFunctionMap_ref_Nova_action, void* action_context);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_static_Nova_catchSyntaxErrors(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeFunctionMap_closure10_Nova_action spectra_tree_nodes_Nova_NodeFunctionMap_Nova_action, void* spectra_tree_nodes_Nova_NodeFunctionMap_ref_Nova_action, void* action_context);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_clone(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char cloneChildren);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* other);
char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_replace(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement);
char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_validateTypes(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_parsePlaceholders(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_NodeList* nodes);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_writeAnnotations(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_toNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMapNode_Nova_construct(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_addChild(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* child);
void spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_onAdded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent);
spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* name, char searchAncestors);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parseStatement(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_cloneTo(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* other);
char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_replace(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement);
char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_validateTypes(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholders(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_NodeList* nodes);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toString(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference);

#endif
