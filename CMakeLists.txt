
cmake_minimum_required(VERSION 3.20)

project(PriceLab VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pricelab
    src/main.cpp
    src/analysis.cpp
)

target_include_directories(pricelab PRIVATE include)
