# Set the minimum version
cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

# Set CXX standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

# Project name
project(telefunke)

# Executable for the game
add_executable(telefunke main.cpp)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

# Executable for unit tests
add_executable(utest
    unit_tests/testCases/testInput.cpp
    unit_tests/testCases/testPlayer.cpp
    unit_tests/testCases/testGame.cpp
)

# Link pthread library which is needed by gtest
target_link_libraries(utest ${GTEST_LIBRARIES}
    pthread
    utest_src
)

# Libraries
target_link_libraries(telefunke
    PRIVATE Files
    PRIVATE Input
    PRIVATE Game
    PRIVATE Player
)

add_subdirectory(Files)
add_subdirectory(Game)
add_subdirectory(Input)
add_subdirectory(Player)
add_subdirectory(unit_tests)
