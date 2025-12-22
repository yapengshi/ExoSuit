// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynamic_biped:srv/SrvChangePhases.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamic_biped/srv/srv_change_phases.h"


#ifndef DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__FUNCTIONS_H_
#define DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "dynamic_biped/msg/rosidl_generator_c__visibility_control.h"

#include "dynamic_biped/srv/detail/srv_change_phases__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvChangePhases__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvChangePhases__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvChangePhases__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvChangePhases__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SrvChangePhases message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamic_biped__srv__SrvChangePhases_Request
 * )) before or use
 * dynamic_biped__srv__SrvChangePhases_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Request__init(dynamic_biped__srv__SrvChangePhases_Request * msg);

/// Finalize srv/SrvChangePhases message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Request__fini(dynamic_biped__srv__SrvChangePhases_Request * msg);

/// Create srv/SrvChangePhases message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamic_biped__srv__SrvChangePhases_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
dynamic_biped__srv__SrvChangePhases_Request *
dynamic_biped__srv__SrvChangePhases_Request__create(void);

/// Destroy srv/SrvChangePhases message.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Request__destroy(dynamic_biped__srv__SrvChangePhases_Request * msg);

/// Check for srv/SrvChangePhases message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Request__are_equal(const dynamic_biped__srv__SrvChangePhases_Request * lhs, const dynamic_biped__srv__SrvChangePhases_Request * rhs);

/// Copy a srv/SrvChangePhases message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Request__copy(
  const dynamic_biped__srv__SrvChangePhases_Request * input,
  dynamic_biped__srv__SrvChangePhases_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvChangePhases_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvChangePhases_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvChangePhases_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvChangePhases_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SrvChangePhases messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamic_biped__srv__SrvChangePhases_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Request__Sequence__init(dynamic_biped__srv__SrvChangePhases_Request__Sequence * array, size_t size);

/// Finalize array of srv/SrvChangePhases messages.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Request__Sequence__fini(dynamic_biped__srv__SrvChangePhases_Request__Sequence * array);

/// Create array of srv/SrvChangePhases messages.
/**
 * It allocates the memory for the array and calls
 * dynamic_biped__srv__SrvChangePhases_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
dynamic_biped__srv__SrvChangePhases_Request__Sequence *
dynamic_biped__srv__SrvChangePhases_Request__Sequence__create(size_t size);

/// Destroy array of srv/SrvChangePhases messages.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Request__Sequence__destroy(dynamic_biped__srv__SrvChangePhases_Request__Sequence * array);

/// Check for srv/SrvChangePhases message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Request__Sequence__are_equal(const dynamic_biped__srv__SrvChangePhases_Request__Sequence * lhs, const dynamic_biped__srv__SrvChangePhases_Request__Sequence * rhs);

/// Copy an array of srv/SrvChangePhases messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Request__Sequence__copy(
  const dynamic_biped__srv__SrvChangePhases_Request__Sequence * input,
  dynamic_biped__srv__SrvChangePhases_Request__Sequence * output);

/// Initialize srv/SrvChangePhases message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamic_biped__srv__SrvChangePhases_Response
 * )) before or use
 * dynamic_biped__srv__SrvChangePhases_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Response__init(dynamic_biped__srv__SrvChangePhases_Response * msg);

/// Finalize srv/SrvChangePhases message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Response__fini(dynamic_biped__srv__SrvChangePhases_Response * msg);

/// Create srv/SrvChangePhases message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamic_biped__srv__SrvChangePhases_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
dynamic_biped__srv__SrvChangePhases_Response *
dynamic_biped__srv__SrvChangePhases_Response__create(void);

/// Destroy srv/SrvChangePhases message.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Response__destroy(dynamic_biped__srv__SrvChangePhases_Response * msg);

/// Check for srv/SrvChangePhases message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Response__are_equal(const dynamic_biped__srv__SrvChangePhases_Response * lhs, const dynamic_biped__srv__SrvChangePhases_Response * rhs);

/// Copy a srv/SrvChangePhases message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Response__copy(
  const dynamic_biped__srv__SrvChangePhases_Response * input,
  dynamic_biped__srv__SrvChangePhases_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvChangePhases_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvChangePhases_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvChangePhases_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvChangePhases_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SrvChangePhases messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamic_biped__srv__SrvChangePhases_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Response__Sequence__init(dynamic_biped__srv__SrvChangePhases_Response__Sequence * array, size_t size);

/// Finalize array of srv/SrvChangePhases messages.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Response__Sequence__fini(dynamic_biped__srv__SrvChangePhases_Response__Sequence * array);

/// Create array of srv/SrvChangePhases messages.
/**
 * It allocates the memory for the array and calls
 * dynamic_biped__srv__SrvChangePhases_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
dynamic_biped__srv__SrvChangePhases_Response__Sequence *
dynamic_biped__srv__SrvChangePhases_Response__Sequence__create(size_t size);

/// Destroy array of srv/SrvChangePhases messages.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Response__Sequence__destroy(dynamic_biped__srv__SrvChangePhases_Response__Sequence * array);

/// Check for srv/SrvChangePhases message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Response__Sequence__are_equal(const dynamic_biped__srv__SrvChangePhases_Response__Sequence * lhs, const dynamic_biped__srv__SrvChangePhases_Response__Sequence * rhs);

/// Copy an array of srv/SrvChangePhases messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Response__Sequence__copy(
  const dynamic_biped__srv__SrvChangePhases_Response__Sequence * input,
  dynamic_biped__srv__SrvChangePhases_Response__Sequence * output);

/// Initialize srv/SrvChangePhases message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamic_biped__srv__SrvChangePhases_Event
 * )) before or use
 * dynamic_biped__srv__SrvChangePhases_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Event__init(dynamic_biped__srv__SrvChangePhases_Event * msg);

/// Finalize srv/SrvChangePhases message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Event__fini(dynamic_biped__srv__SrvChangePhases_Event * msg);

/// Create srv/SrvChangePhases message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamic_biped__srv__SrvChangePhases_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
dynamic_biped__srv__SrvChangePhases_Event *
dynamic_biped__srv__SrvChangePhases_Event__create(void);

/// Destroy srv/SrvChangePhases message.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Event__destroy(dynamic_biped__srv__SrvChangePhases_Event * msg);

/// Check for srv/SrvChangePhases message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Event__are_equal(const dynamic_biped__srv__SrvChangePhases_Event * lhs, const dynamic_biped__srv__SrvChangePhases_Event * rhs);

/// Copy a srv/SrvChangePhases message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Event__copy(
  const dynamic_biped__srv__SrvChangePhases_Event * input,
  dynamic_biped__srv__SrvChangePhases_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_type_hash_t *
dynamic_biped__srv__SrvChangePhases_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeDescription *
dynamic_biped__srv__SrvChangePhases_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource *
dynamic_biped__srv__SrvChangePhases_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamic_biped__srv__SrvChangePhases_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SrvChangePhases messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamic_biped__srv__SrvChangePhases_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Event__Sequence__init(dynamic_biped__srv__SrvChangePhases_Event__Sequence * array, size_t size);

/// Finalize array of srv/SrvChangePhases messages.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Event__Sequence__fini(dynamic_biped__srv__SrvChangePhases_Event__Sequence * array);

/// Create array of srv/SrvChangePhases messages.
/**
 * It allocates the memory for the array and calls
 * dynamic_biped__srv__SrvChangePhases_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
dynamic_biped__srv__SrvChangePhases_Event__Sequence *
dynamic_biped__srv__SrvChangePhases_Event__Sequence__create(size_t size);

/// Destroy array of srv/SrvChangePhases messages.
/**
 * It calls
 * dynamic_biped__srv__SrvChangePhases_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
void
dynamic_biped__srv__SrvChangePhases_Event__Sequence__destroy(dynamic_biped__srv__SrvChangePhases_Event__Sequence * array);

/// Check for srv/SrvChangePhases message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Event__Sequence__are_equal(const dynamic_biped__srv__SrvChangePhases_Event__Sequence * lhs, const dynamic_biped__srv__SrvChangePhases_Event__Sequence * rhs);

/// Copy an array of srv/SrvChangePhases messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamic_biped
bool
dynamic_biped__srv__SrvChangePhases_Event__Sequence__copy(
  const dynamic_biped__srv__SrvChangePhases_Event__Sequence * input,
  dynamic_biped__srv__SrvChangePhases_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // DYNAMIC_BIPED__SRV__DETAIL__SRV_CHANGE_PHASES__FUNCTIONS_H_
