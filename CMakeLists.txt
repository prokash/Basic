cmake_minimum_required(VERSION 4.0)

project(Basics C CXX)  # enable both C and C++

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(Basics main.c
        fair_count.cpp
        fair_count.hpp
        Howmany.cpp
        Howmany.hpp)
