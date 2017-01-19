cmake_minimum_required(VERSION 3.6)
project(RPNCalc)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Command.h PushNumberCommand.cpp PushNumberCommand.h DivideOperatorCommand.cpp DivideOperatorCommand.h SubtractOperatorCommand.cpp SubtractOperatorCommand.h AddOperatorCommand.cpp AddOperatorCommand.h MultiplyOperatorCommand.cpp MultiplyOperatorCommand.h)
add_executable(RPNCalc ${SOURCE_FILES})