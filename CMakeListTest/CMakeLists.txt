cmake_minimum_required(VERSION 3.5.0)
project(CmakeTest VERSION 1.0.0)

SET(MAIN_SOURCE main.cpp)

if(WIN32)
    MESSAGE(STATUS "compile project with win32 envriment .....")
elseif(UNIX)
    MESSAGE(STATUS "compile project with UNIX envriment .....")
else()
    MESSAGE(STATUS "compile project with other envriment .....")
endif()

# add_library(TestAdd STATIC TestAdd.h TestAdd.cpp)
add_library(TestAdd SHARED TestAdd.h TestAdd.cpp)

add_executable(CmakeTest ${MAIN_SOURCE})

target_link_libraries(CmakeTest TestAdd)