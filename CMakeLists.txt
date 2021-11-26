cmake_minimum_required(VERSION 3.20)
project(List)

set(CMAKE_CXX_STANDARD 20)

add_executable(List main.cpp ../akinator/list/src/list.cpp ../akinator/list/include/list.h ../akinator/list/include/config.h ../akinator/list/src/dump.cpp ../akinator/list/include/dump.h)
