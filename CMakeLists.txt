cmake_minimum_required(VERSION 3.27)
project(CTutorial)

set(CMAKE_CXX_STANDARD 20)

add_executable(CTutorial main.cpp
        comments.cpp
        comments.h
        compile.cpp
        statement_functions.cpp
        statement_functions.h
        variable_numbers.h
        variable_numbers.cpp)
