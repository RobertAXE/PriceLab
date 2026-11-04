
cmake_minimum_required(VERSION 3.20)

project(PriceLab VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Financial calculations
add_library(pricelab_core
    src/analysis.cpp
)

target_include_directories(pricelab_core PUBLIC include)

# Main application
add_executable(pricelab src/main.cpp)
target_link_libraries(pricelab PRIVATE pricelab_core)

# GoogleTest
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.18.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Unit tests
enable_testing()

add_executable(pricelab_tests tests/test_analysis.cpp)

target_link_libraries(pricelab_tests PRIVATE
    pricelab_core
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(pricelab_tests)
