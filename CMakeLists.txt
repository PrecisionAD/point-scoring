# Set the minimum version
cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

# Set CXX standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project name
project(telefunke)

# Executable
add_executable(telefunke main.cpp)

# Libraries
target_link_libraries(telefunke PUBLIC
    Files
    Input
    Game
    Player
)

add_subdirectory(Files)
add_subdirectory(Game)
add_subdirectory(Input)
add_subdirectory(Player)
