cmake_minimum_required(VERSION 3.8)
project(Vijos)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES 1484/main.cpp)
set(SOURCE_FILES test/test.cpp)

add_executable(Vijos ${SOURCE_FILES})