#ifndef FILE_nova_database_Nova_DBConnector_NOVA
#define FILE_nova_database_Nova_DBConnector_NOVA

typedef struct nova_database_Nova_DBConnector nova_database_Nova_DBConnector;
typedef struct nova_database_Nova_DBConnectorFunctionMap nova_database_Nova_DBConnectorFunctionMap;


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
#include <nova/database/NativeDBConnector.h>
#include <nova/database/nova_database_Nova_ResultSet.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_database_Nova_DBConnector, 
	
	nova_database_DBConnector_Extension_VTable* vtable;
	nova_Nova_String* nova_database_Nova_DBConnector_Nova_error;
	struct Private_nova_database_Nova_DBConnector* prv;
)

void nova_database_Nova_DBConnector_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_DBConnector* nova_database_Nova_DBConnector_Nova_construct(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnector_Nova_destroy(nova_database_Nova_DBConnector** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnector_Nova_this(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnector_0_Nova_connect(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password);
void nova_database_Nova_DBConnector_1_Nova_connect(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password, nova_Nova_String* database);
void nova_database_Nova_DBConnector_2_Nova_connect(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password, nova_Nova_String* database, int port, nova_Nova_String* unixSocket, int clientFlag);
void nova_database_Nova_DBConnector_Nova_updateError(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnector_Nova_changeUser(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* username, nova_Nova_String* password, nova_Nova_String* database);
nova_database_Nova_ResultSet* nova_database_Nova_DBConnector_Nova_query(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* query);
void nova_database_Nova_DBConnector_Nova_close(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnector_Nova_super(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_database_Nova_DBConnectorFunctionMap, 
	
	nova_database_DBConnector_DBConnectorFunctionMap_Extension_VTable* vtable;
)

void nova_database_Nova_DBConnectorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_DBConnectorFunctionMap* nova_database_Nova_DBConnectorFunctionMap_Nova_construct(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnectorFunctionMap_Nova_destroy(nova_database_Nova_DBConnectorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnectorFunctionMap_Nova_this(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_DBConnector* nova_database_Nova_DBConnectorFunctionMap_functionMapDBConnectorFunctionMap_Nova_construct(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_DBConnectorFunctionMap_functionMap0_Nova_connect(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password);
void nova_database_Nova_DBConnectorFunctionMap_functionMap1_Nova_connect(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password, nova_Nova_String* database);
void nova_database_Nova_DBConnectorFunctionMap_functionMap2_Nova_connect(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password, nova_Nova_String* database, int port, nova_Nova_String* unixSocket, int clientFlag);
void nova_database_Nova_DBConnectorFunctionMap_functionMap_Nova_updateError(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference);
void nova_database_Nova_DBConnectorFunctionMap_functionMap_Nova_changeUser(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference, nova_Nova_String* username, nova_Nova_String* password, nova_Nova_String* database);
nova_database_Nova_ResultSet* nova_database_Nova_DBConnectorFunctionMap_functionMap_Nova_query(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference, nova_Nova_String* query);
void nova_database_Nova_DBConnectorFunctionMap_functionMap_Nova_close(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* reference);
void nova_database_Nova_DBConnectorFunctionMap_Nova_super(nova_database_Nova_DBConnectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
