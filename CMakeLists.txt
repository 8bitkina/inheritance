cmake_minimum_required(VERSION 3.16)
project(inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(inheritance main.cpp Prism.cpp Prism.h Figure.cpp Figure.h Triangle.cpp Triangle.h)