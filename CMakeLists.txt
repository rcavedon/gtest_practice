cmake_minimum_required(VERSION 3.13)
project(gtest_practice)

# Add google test dir
add_subdirectory(external)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++0x -pthread -O3 -g -Wall ${CMAKE_CXX_FLAGS}")

# GTest
add_executable(googletest_practice gtest_practice.cc factory_unittest.cc factory.cc factory.h)
target_link_libraries(googletest_practice gtest gtest_main)
add_test(FactorialTest FactorialTest)
add_test(IsPrimeTest IsPrimeTest)

#GMock
# https://github.com/google/googletest/blob/master/googlemock/docs/CookBook.md non-virtual class
add_executable(googlemock_practice gmock_practice.cc mock-turtle.h)
target_link_libraries(googletest_practice gtest gtest_main)