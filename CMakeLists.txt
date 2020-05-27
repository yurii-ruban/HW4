cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(testApp)

set(SOURCES main.cpp)
add_subdirectory(lib)

add_executable(testapp ${SOURCES})
target_include_directories(include)
target_link_libraries(testapp datatypes)
