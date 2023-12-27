# Sample static library
add_library(setlib STATIC)

target_sources(
        setlib
        PRIVATE
        "BinaryTree.h"
        "BinaryTree.cpp"
)

