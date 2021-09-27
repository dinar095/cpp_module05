cmake_minimum_required(VERSION 3.17)
project(cpp_module04)

set(CMAKE_CXX_STANDARD 98)

file(GLOB EX00 ex00/*.cpp ex00/*.hpp)
add_executable(ex00 ${EX00})
#
#
#file(GLOB ../../Desktop/del/ex01 ex01/*.cpp ex01/*.hpp)
#add_executable(../../Desktop/del/ex01 ${EX01})
#
#file(GLOB ../../Desktop/del/ex02 ex02/*.cpp ex02/*.hpp)
#add_executable(../../Desktop/del/ex02 ${EX02})
#
#file(GLOB ../../Desktop/del/ex03 ex03/*.cpp ex03/*.hpp)
#add_executable(../../Desktop/del/ex03 ${EX03})
