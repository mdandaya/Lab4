cmake_minimum_required(VERSION 3.14)
project(Lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab4 inheritance.cpp animal.hpp animal.cpp bird.hpp bird.cpp canine.cpp canine.hpp)