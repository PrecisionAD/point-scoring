# Add library
add_library(Player
    src/Player.cpp
)

# Add headers
target_include_directories(Player
    PRIVATE headers
)

target_link_libraries(Player
    PRIVATE Game
    PRIVATE Input
)
