# Add library
add_library(Files
    src/Files.cpp
)

# Add headers
target_include_directories(Files
    PUBLIC headers
)

# Link libraries
target_link_libraries(Files
    PRIVATE Player
    PRIVATE Game
)
