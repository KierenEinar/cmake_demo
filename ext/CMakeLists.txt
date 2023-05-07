cmake_minimum_required(VERSION 3.22)

project(utils C)

set(CMAKE_C_STANDARD 23)

add_library(myext SHARED utils.c mymath.c)



