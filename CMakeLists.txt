cmake_minimum_required(VERSION 2.8)

project(Rmath_test)
include_directories("${PROJECT_SOURCE_DIR}/lib/Rmath/")
add_executable (Rmath_test "test_Rmath.cc")
add_subdirectory ("${PROJECT_SOURCE_DIR}/lib/")
target_link_libraries (Rmath_test Rmath)
