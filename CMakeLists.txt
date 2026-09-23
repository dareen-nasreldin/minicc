# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.23)

# Define the project name and programming language
project(minicc LANGUAGES CXX)

# Tells compiler to accept C++20 syntax
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create an executable target from your source code
add_executable(minicc src/main.cpp)

# cmake -S . -B build 