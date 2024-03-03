cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(utests)

# These packages are needed in order to compile
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
# include_directories(${GTEST_INCLUDE_DIRS})

add_executable(utest
    testCases/testInput.cpp
    testCases/testPlayer.cpp
    testCases/testGame.cpp
)

# Link pthread library which is needed by gtest
target_link_libraries(utest ${GTEST_LIBRARIES}
    pthread
    utest_src
)

add_subdirectory(testCases)
