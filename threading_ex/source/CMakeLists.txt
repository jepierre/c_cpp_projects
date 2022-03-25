#Specify the version being used aswell as the language
cmake_minimum_required(VERSION 3.8)
#Name your project here
project(threading_ex)
find_package(Threads REQUIRED)

#Sends the -std=c99 flag to the gcc compiler
#add_definitions(-std=c++11)
#This tells CMake to fib.c and name it fibonacci

add_executable(threading_func threading_func.cpp )
target_link_libraries(threading_func Threads::Threads)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
