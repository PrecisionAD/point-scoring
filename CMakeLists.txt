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

# Search for gtest
if(APPLE)
    set(GTEST_INCLUDE_DIR "/usr/local/Cellar/googleteest/1.15.2/include")
    set(GTEST_LIB_DIR "/usr/local/Cellar/googleteest/1.15.2/lib")
elseif(UNIX)
    set(GTEST_INCLUDE_DIR "/usr/include/gtest")
    set(GTEST_LIB_DIR "/usr/lib")
else()
    message(FATAL_ERROR "Unsupported platform!")
endif()

# Add include directory for Google Test
include_directories(${GTEST_INCLUDE_DIR})
include_directories(
    ${CMAKE_SOURCE_DIR}/headers
    ${CMAKE_SOURCE_DIR}/Player/headers
    ${CMAKE_SOURCE_DIR}/Game/headers
    ${CMAKE_SOURCE_DIR}/Input/headers
    ${CMAKE_SOURCE_DIR}/Files/headers
)

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
target_link_libraries(telefunke PRIVATE
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
