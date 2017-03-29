cmake_minimum_required(VERSION 3.6)
project(SortInt)
set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES
        SortIntMain.cpp)

add_executable(SortInt ${SOURCE_FILES})
target_link_libraries(SortInt /Users/zhangheng/developer/clion/dp4dsDistribution/Utilities/libUtilities.a)