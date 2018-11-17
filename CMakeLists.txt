cmake_minimum_required(VERSION 3.12)
project(c_stepik C)

set(CMAKE_C_STANDARD 99)

add_executable(c_stepik main.c)
add_executable(test distance.c)
add_executable(square_triangle square_triangle.c)
add_executable(bits_number bits_number.c)