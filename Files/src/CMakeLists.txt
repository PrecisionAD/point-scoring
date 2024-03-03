# Add the library
add_library(Files
    Files.cpp
)

# Add the headers
target_include_directories(Files
    PRIVATE ../headers
)
