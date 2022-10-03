cmake_minimum_required(VERSION 3.23)
project(project)

set(CMAKE_CXX_STANDARD 14)

add_executable(project list1_4.cpp list1_6.cpp "list1_7(main).cpp" student.h group.h)
