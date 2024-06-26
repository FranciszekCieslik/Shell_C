# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and the programming language used
project(My_Shell)

# Specify the C standard
set(CMAKE_C_STANDARD 99)

# Add the executable
add_executable(my_shell_app main.c)
