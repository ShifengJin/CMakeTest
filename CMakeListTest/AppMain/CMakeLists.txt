cmake_minimum_required(VERSION 3.5.0)
project(CmakeTest VERSION 1.0.0)

# SET(MAIN_SOURCE main.cpp)
aux_source_directory("./" MAIN_SOURCE)

add_executable(CmakeTest ${MAIN_SOURCE})

target_link_libraries(CmakeTest TestAdd)