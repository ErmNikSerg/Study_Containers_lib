cmake_minimum_required(VERSION 3.5)

project(Study_Cpp_Standart_Libraries LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    Study_Cpp_Standart_Libraries
    src/main.cpp
    src/study_containers.h      src/study_containers.cpp
    src/study_filesystem.h      src/study_filesystem.cpp
)

install(TARGETS Study_Cpp_Standart_Libraries
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
