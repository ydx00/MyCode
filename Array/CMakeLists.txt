cmake_minimum_required(VERSION 3.8)
project(Array)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES RemoveDuplicates.cpp removeDuplicatesTwo.cpp Search.cpp)
add_executable(Array ${SOURCE_FILES})
