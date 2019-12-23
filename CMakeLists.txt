cmake_minimum_required(VERSION 3.15)
project(MyCRepo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(MyCRepo
    bitwise_ops.c
    bitwise_ops.h
        readwav.c readwav.h)
