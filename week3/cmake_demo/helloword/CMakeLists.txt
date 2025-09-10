cmake_minimum_required(VERSION 3.12) 

project(HelloWorld) 

add_executable(HelloWorld main.cpp)

set_property(TARGET HelloWorld PROPERTY CXX_STANDARD 20)
