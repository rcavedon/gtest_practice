cmake_minimum_required(VERSION 3.13)
project(gtest_practice)

# Add google test dir
add_subdirectory(external)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++0x -pthread -O3 -g -Wall ${CMAKE_CXX_FLAGS}")

add_executable(gtest_practice main.cpp factory_unittest.cc factory.cc factory.h)
target_link_libraries(gtest_practice gtest gtest_main)

add_test(FactorialTest FactorialTest)
add_test(IsPrimeTest IsPrimeTest)