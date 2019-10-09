cmake_minimum_required(VERSION 3.5.0)

aux_source_directory("./src/TestAdd_lib" TestAdd_SOURCE)

message(STATUS ${TestAdd_SOURCE})

add_library(
TestAdd
STATIC
${TestAdd_SOURCE}
)
#add_library(
#TestAdd
#STATIC
#src/TestAdd_lib/TestAdd.h 
#src/TestAdd_lib/TestAdd.cp
#)
target_include_directories(TestAdd PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")