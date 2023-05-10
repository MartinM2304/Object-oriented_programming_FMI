cmake_minimum_required(VERSION 3.24)
project(task01)

set(CMAKE_CXX_STANDARD 17)

add_executable(task01 main.cpp MyString.cpp MyString.h Product.h Product.cpp Restaurant.cpp Restaurant.h Order.cpp Order.h)
