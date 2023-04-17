cmake_minimum_required(VERSION 3.25)
project(myString C)

set(CMAKE_C_STANDARD 99)

add_executable(myString main.c myString.c myString.h)
