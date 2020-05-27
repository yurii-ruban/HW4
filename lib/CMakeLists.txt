cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(datatypesLib)

set(SOURCES src/datatypes.cpp)

add_library(datatypes STATIC ${SOURCES})
target_include_directories(datatypes PUBLIC include)
