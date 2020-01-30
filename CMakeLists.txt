cmake_minimum_required(VERSION 3.13)
project(Moor C)

set(CMAKE_C_STANDARD 99)

add_executable(Moor main.c moor.c moor.h)