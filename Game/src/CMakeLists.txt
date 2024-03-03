# Add library
add_library(Game
    Game.cpp
)

# Add headers
target_include_directories(Game
    PUBLIC ../headers
)
