cmake_minimum_required(VERSION 3.14)
project(CMakeGTestIntegration)

set(CMAKE_CXX_STANDARD 11)

# Now simply link against gtest or gtest_main as needed. Eg

#Build GTest
add_subdirectory(gtest)

#Build Main application
add_executable(GTestIntegrationMain main.cpp) #Build application

#Build tests
add_executable(GTestIntegrationTest unittest/simple_test.cpp unittest/fixture_test.cpp) #Build test
target_link_libraries(GTestIntegrationTest gtest_main) #Link gtest library
