# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.23)

# Define the project name and programming language
project(minicc LANGUAGES CXX)

# Tells compiler to accept C++20 syntax
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create an executable target from your source code
add_executable(minicc src/main.cpp)


# Issue #2: Add unit tests
enable_testing()
add_executable(unit_tests test/unit/main_test.cpp)
target_include_directories(unit_tests PRIVATE test/third_party)
add_test(NAME unit COMMAND unit_tests)

# cmake -S . -B build to configure the project