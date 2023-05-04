cmake_minimum_required(VERSION 3.24)
project(task03)

set(CMAKE_CXX_STANDARD 17)

add_executable(task03 main.cpp MyString.h MyString.cpp User.cpp User.h UserSystem.cpp UserSystem.h Message.cpp Message.h)
