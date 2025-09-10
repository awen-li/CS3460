cmake_minimum_required(VERSION 3.12) 
project(multiDemo)

# target executable
add_executable(multi main.cpp)

# headers
target_include_directories(multi PRIVATE include)  

# sub-modules
add_subdirectory(add)
add_subdirectory(multiply)


# add linked libraries
target_link_libraries(multi PRIVATE add multiply)

set_property(TARGET multi PROPERTY CXX_STANDARD 20)

