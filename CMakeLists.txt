cmake_minimum_required(VERSION 3.17)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm main.cpp sort/Sort.h sort/maopaoSort.cpp sort/quickSort.cpp sort/quickSort1.cpp)