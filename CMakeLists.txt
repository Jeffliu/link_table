cmake_minimum_required(VERSION 3.13)
project(link_table)
set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        *.h
        *.cpp
        )

set(SOURCE_FILES main.cpp list.cpp)
add_executable(link_table ${SOURCE_FILES} ${SOURCES})