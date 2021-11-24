cmake_minimum_required(VERSION 3.20)
project(List)

set(CMAKE_CXX_STANDARD 20)

add_executable(List main.cpp src/list.cpp include/list.h include/config.h src/dump.cpp include/dump.h)
