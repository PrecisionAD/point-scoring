# Add library
add_library(Player
    Player.cpp
)

# Add headers
target_include_directories(Player
    PRIVATE ../headers
)
