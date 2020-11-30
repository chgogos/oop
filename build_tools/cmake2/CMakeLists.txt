cmake_minimum_required(VERSION 3.5)
project(pjc-lab5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(vector-test
    array.cpp
    vector.cpp
    main.cpp
    array.hpp
    vector.hpp
)

source_group("Tests" FILES main.cpp)
source_group("Implementation" FILES array.cpp vector.cpp)


if ( CMAKE_CXX_COMPILER_ID MATCHES "Clang|AppleClang|GNU" )
    target_compile_options( vector-test PRIVATE -Wall -Wextra -Wunreachable-code -Wpedantic)
endif()
if ( CMAKE_CXX_COMPILER_ID MATCHES "Clang" )
    target_compile_options( vector-test PRIVATE -Wweak-vtables -Wexit-time-destructors -Wglobal-constructors -Wmissing-noreturn )
endif()
if ( CMAKE_CXX_COMPILER_ID MATCHES "MSVC" )
    target_compile_options( vector-test PRIVATE /W4 /w44265 /w44061 /w44062 )
endif()

include(CTest)
add_test(NAME plain-run COMMAND $<TARGET_FILE:vector-test>)