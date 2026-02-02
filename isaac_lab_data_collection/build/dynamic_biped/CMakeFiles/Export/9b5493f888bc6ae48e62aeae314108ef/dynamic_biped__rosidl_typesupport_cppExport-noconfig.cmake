#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dynamic_biped::dynamic_biped__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET dynamic_biped::dynamic_biped__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dynamic_biped::dynamic_biped__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdynamic_biped__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libdynamic_biped__rosidl_typesupport_cpp.so"
  )

list(APPEND _cmake_import_check_targets dynamic_biped::dynamic_biped__rosidl_typesupport_cpp )
list(APPEND _cmake_import_check_files_for_dynamic_biped::dynamic_biped__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libdynamic_biped__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
