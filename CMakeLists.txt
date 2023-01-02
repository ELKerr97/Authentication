cmake_minimum_required(VERSION 3.24)
project(Authentication)

set(CMAKE_CXX_STANDARD 17)

add_executable(Authentication main.cpp User.h UserDatabase.h)
