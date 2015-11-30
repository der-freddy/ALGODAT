cmake_minimum_required(VERSION 2.8)
project (Software_Eng)
set (CMAKE_CXX_FLAGS "-std=gnu++11 -fopenmp" )


add_executable( qs quicksort.cpp )