cmake_minimum_required(VERSION 3.22)

project(cmake_demo C)

set(CMAKE_C_STANDARD 23)

aux_source_directory(src SRC_LIST)
add_definitions(-D Test=123)

include_directories(${PROJECT_SOURCE_DIR}/ext)
link_directories(${PROJECT_SOURCE_DIR}/ext)

link_libraries(myext)

add_executable(cmake_demo ${SRC_LIST})





