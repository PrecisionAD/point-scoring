# Add library
add_library(Game
    src/Game.cpp
)

# Add headers
target_include_directories(Game
    PUBLIC headers
)

# Link libraries
target_link_libraries(Game
    PRIVATE Player
    PRIVATE Input
)
