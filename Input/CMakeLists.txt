# Add the library
add_library(Input
    src/Input.cpp
)

# Add the headers
target_include_directories(Input
    PRIVATE headers
)

# Link libraries
target_link_libraries(Input
    PRIVATE Player
    PRIVATE Game
)
