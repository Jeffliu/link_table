cmake_minimum_required(VERSION 3.13)
project(.)
set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        *.h
        *.cpp
        )

set(SOURCE_FILES main.cpp list.cpp)
add_executable(. ${SOURCE_FILES} ${SOURCES})