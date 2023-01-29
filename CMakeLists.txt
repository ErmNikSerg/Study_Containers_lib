cmake_minimum_required(VERSION 3.5)

project(Study_Containers_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    Study_Containers_lib
    src/main.cpp
    src/study_containers.h      src/study_containers.cpp
)

install(TARGETS Study_Containers_lib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
