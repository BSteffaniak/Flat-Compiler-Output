#ifndef FILE_example_network_Nova_OutputThread_NOVA
#define FILE_example_network_Nova_OutputThread_NOVA

typedef struct example_network_Nova_OutputThread example_network_Nova_OutputThread;


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
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <example/network/example_network_Nova_ClientDemo.h>
#include <example/network/example_network_Nova_ConnectionThread.h>
#include <example/network/example_network_Nova_ServerDemo.h>
#include <nova/thread/NativeThread.h>
#include <nova/thread/nova_thread_Nova_ThreadLocal.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

CCLASS_CLASS
(
	example_network_Nova_OutputThread, 
	
	example_network_Nova_OutputThread_VTable* vtable;
	struct Private_example_network_Nova_OutputThread* prv;
	nova_Nova_String* nova_Nova_Object_Nova_hashCode;
	char nova_thread_Nova_Thread_Nova_active;
)

extern char example_network_Nova_OutputThread_Nova_init_static_inited;
void example_network_Nova_OutputThread_Nova_init_static();
example_network_Nova_OutputThread* example_network_Nova_OutputThread_Nova_construct(example_network_Nova_OutputThread* this, nova_network_Nova_ServerSocket* serverSocket, nova_network_Nova_ConnectionSocket* socket);
void example_network_Nova_OutputThread_Nova_destroy(example_network_Nova_OutputThread** this);
example_network_Nova_OutputThread* example_network_Nova_OutputThread_Nova_this(example_network_Nova_OutputThread* this, nova_network_Nova_ServerSocket* serverSocket, nova_network_Nova_ConnectionSocket* socket);
void example_network_Nova_OutputThread_Nova_run(example_network_Nova_OutputThread* this);
void example_network_Nova_OutputThread_Nova_super(example_network_Nova_OutputThread* this);

#endif
