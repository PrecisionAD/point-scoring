# Add the library
add_library(Input
    Input.cpp
)

# Add the headers
target_include_directories(Input
    PRIVATE ../headers
)
