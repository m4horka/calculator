cmake_minimum_required(VERSION 3.23)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculator main.cpp math/BinaryOperation.h math/UnaryOperation.h service/Program.cpp service/Program.h service/IOFunctions.h)
