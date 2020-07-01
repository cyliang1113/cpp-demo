cmake_minimum_required(VERSION 3.14)
project(cpp_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_demo main.cpp demo/base/demo01.cpp demo/base/demo01.h demo/clazz/demo01.cpp demo/clazz/demo01.h demo/clazz/demo02.cpp demo/clazz/demo02.h demo/clazz/demo03.cpp demo/clazz/demo03.h)