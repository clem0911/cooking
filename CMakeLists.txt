# cmake_minimum_required(VERSION <specify CMake version here>)
project(cook)

cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(cook
        src/main.cpp src/visualizer.cpp src/recipe.cpp)
