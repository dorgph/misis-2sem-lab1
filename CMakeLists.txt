cmake_minimum_required(VERSION 3.20)

project(lab1)

add_library(utils src/utils.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main PUBLIC utils)