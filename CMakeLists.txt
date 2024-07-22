cmake_minimum_required(VERSION 3.28)
project(Time)

set(CMAKE_CXX_STANDARD 17)

add_executable(Time main.cpp
        src/Time.cpp
        include/Time.h)
