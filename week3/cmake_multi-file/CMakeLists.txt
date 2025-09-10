cmake_minimum_required(VERSION 3.12) 
project(multiDemo)

# target executable
add_executable(multi main.cpp add.cpp multiply.cpp)

# headers
target_include_directories(multi PRIVATE include)

set_property(TARGET multi PROPERTY CXX_STANDARD 20)

