cmake_minimum_required(VERSION 3.5.0)

add_library(
TestAdd
STATIC
src/TestAdd_lib/TestAdd.h 
src/TestAdd_lib/TestAdd.cpp
)

target_include_directories(TestAdd PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")