#ifndef FILE_spectra_tree_nodes_Nova_NovaFile_NOVA
#define FILE_spectra_tree_nodes_Nova_NovaFile_NOVA

typedef struct spectra_tree_nodes_Nova_NovaFile spectra_tree_nodes_Nova_NovaFile;
typedef struct spectra_tree_nodes_Nova_NovaFileFunctionMap spectra_tree_nodes_Nova_NovaFileFunctionMap;
typedef struct spectra_tree_nodes_Nova_NovaFilePropertyMap spectra_tree_nodes_Nova_NovaFilePropertyMap;


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
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureContext.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ImportList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_InterfaceDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Package.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_TraitDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_NovaFile, 
	
	spectra_tree_nodes_NovaFile_Extension_VTable* vtable;
	spectra_util_Nova_Location* spectra_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Node_Nova_annotations;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parent;
	nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_name;
	nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_source;
	nova_io_Nova_File* spectra_tree_nodes_Nova_NovaFile_Nova_file;
	spectra_tree_nodes_Nova_ImportList* spectra_tree_nodes_Nova_NovaFile_Nova_importList;
	spectra_tree_nodes_Nova_Package* spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Nova_closures;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Nova_contexts;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Nova_classes;
)
extern nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS;

void spectra_tree_nodes_Nova_NovaFile_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFile_Nova_construct(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_NovaFile_Nova_destroy(spectra_tree_nodes_Nova_NovaFile** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFile_Nova_this(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_NovaFile_Nova_addChild(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFile_Nova_parseStatement(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFile_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int includeSelf);
void spectra_tree_nodes_Nova_NovaFile_Nova_addAutoImports(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_NovaFile_Nova_addImport(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, int userAdded);
char spectra_tree_nodes_Nova_NovaFile_Nova_containsImport(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, int absoluteLocation, int aliased);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_toNova(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_toString(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_parentFile(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_fileLocation(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFile_Nova_super(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_NovaFileFunctionMap, 
	
	spectra_tree_nodes_NovaFile_NovaFileFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFileFunctionMap* spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NovaFileFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_this(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMapNovaFileFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, spectra_tree_nodes_Nova_Node* child);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_getImportedClass(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* name, char includeSelf);
void spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addAutoImports(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addImport(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* location, char userAdded);
char spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_containsImport(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* location, char absoluteLocation, char aliased);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_toNova(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_super(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_NovaFilePropertyMap, 
	
	spectra_tree_nodes_NovaFile_NovaFilePropertyMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_Nova_NovaFilePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFilePropertyMap* spectra_tree_nodes_Nova_NovaFilePropertyMap_Nova_construct(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFilePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_NovaFilePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFilePropertyMap_Nova_this(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_parentFile(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_name(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_source(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_io_Nova_File* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_file(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
spectra_tree_nodes_Nova_ImportList* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_importList(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
spectra_tree_nodes_Nova_Package* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_packageDeclaration(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_imports(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_closures(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_contexts(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_fileLocation(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_classDeclaration(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_Nova_classes(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFilePropertyMap_functionMap_static_Nova_DEFAULT_IMPORTS(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NovaFilePropertyMap_Nova_super(spectra_tree_nodes_Nova_NovaFilePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
