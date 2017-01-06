#ifndef FILE_nova_math_Nova_Matrix_NOVA
#define FILE_nova_math_Nova_Matrix_NOVA

typedef struct nova_math_Nova_Matrix nova_math_Nova_Matrix;
typedef struct nova_math_Nova_MatrixFunctionMap nova_math_Nova_MatrixFunctionMap;


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
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/exception/nova_exception_Nova_InvalidArgumentException.h>
#include <nova/exception/nova_exception_Nova_InvalidOperationException.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_math_Nova_Matrix, 
	
	nova_math_Matrix_Extension_VTable* vtable;
	struct Private_nova_math_Nova_Matrix* prv;
)

void nova_math_Nova_Matrix_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_2_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
void nova_math_Nova_Matrix_Nova_destroy(nova_math_Nova_Matrix** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_0_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
void nova_math_Nova_Matrix_1_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols);
void nova_math_Nova_Matrix_2_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_clone(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_static_Nova_identity(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_inverse(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_Nova_swapRows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int row1, int row2);
void nova_math_Nova_Matrix_Nova_multiplyRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow, double scalar);
void nova_math_Nova_Matrix_Nova_addRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow);
void nova_math_Nova_Matrix_Nova_subtractRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, int allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_plus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_plus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, char allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_subtract(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, int allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_minus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_minus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, char allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_multiply(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_transpose(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Matrix_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Matrix_static_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_Nova_String* nova_math_Nova_Matrix_Nova_toString(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_get(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_set(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_datastruct_list_Nova_DoubleArray* value);
char nova_math_Nova_Matrix_Accessor_Nova_isIdentity(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_math_Nova_Matrix_Accessor_Nova_isSquare(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_Nova_super(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_MatrixFunctionMap, 
	
	nova_math_Matrix_MatrixFunctionMap_Extension_VTable* vtable;
)

void nova_math_Nova_MatrixFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_MatrixFunctionMap* nova_math_Nova_MatrixFunctionMap_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MatrixFunctionMap_Nova_destroy(nova_math_Nova_MatrixFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MatrixFunctionMap_Nova_this(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMapMatrixFunctionMap0_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMapMatrixFunctionMap1_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMapMatrixFunctionMap2_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_clone(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_static_Nova_identity(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_inverse(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference);
void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_swapRows(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int row1, int row2);
void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_multiplyRow(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int sourceRow, int destinationRow, double scalar);
void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_addRow(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int sourceRow, int destinationRow);
void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_subtractRow(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int sourceRow, int destinationRow);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_add(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap0_Nova_plus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap1_Nova_plus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_subtract(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap0_Nova_minus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap1_Nova_minus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_multiply(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_transpose(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference);
double nova_math_Nova_MatrixFunctionMap_functionMap_Nova_determinant(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference);
double nova_math_Nova_MatrixFunctionMap_functionMap_static_Nova_determinant(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_Nova_String* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_toString(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_get(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int index);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_set(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int index, nova_datastruct_list_Nova_DoubleArray* value);
void nova_math_Nova_MatrixFunctionMap_Nova_super(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
