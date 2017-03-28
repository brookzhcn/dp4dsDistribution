cmake_minimum_required(VERSION 3.6)
project(ArrayT)
set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES
        ArrayT.hpp
        ArrayTMain.cpp)

add_executable(ArrayT ${SOURCE_FILES})
target_link_libraries(ArrayT /Users/zhangheng/developer/clion/dp4dsDistribution/cmake-build-debug/Utilities/libUtilities.a)