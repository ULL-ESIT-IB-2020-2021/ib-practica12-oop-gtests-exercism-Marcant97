cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(fecha              # Mandatory
    VERSION 1.0
    DESCRIPTION "Proyecto numeros complejos"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14) 						# Use c++14
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "fecha" to be built from the source files listed in the command invocation.
add_executable(complejo
    src/complejo.h
    src/complejo.cc
    src/complejo_main.cc)

# Add expected compiler features to a target.
target_compile_features(complejo PRIVATE cxx_std_14)

# Add compile options to a target.
target_compile_options(complejo PRIVATE -Wall -Wextra -Wpedantic)
