cmake_minimum_required(VERSION 3.6)
project(Utilities)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Utilities.cpp)

add_library(Utilities STATIC ${SOURCE_FILES})