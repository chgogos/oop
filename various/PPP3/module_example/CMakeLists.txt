cmake_minimum_required(VERSION 3.28)
project(modules_demo CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app main.cpp)
target_sources(app PRIVATE FILE_SET CXX_MODULES FILES math.cppm)