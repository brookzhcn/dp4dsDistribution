cmake_minimum_required(VERSION 3.6)
project(SortCompAsgnMain)
set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES
       SortCompAsgnMain.cpp)

add_executable(SortCompAsgnMain ${SOURCE_FILES})
target_link_libraries(SortCompAsgnMain /Users/zhangheng/developer/clion/dp4dsDistribution/Utilities/libUtilities.a)