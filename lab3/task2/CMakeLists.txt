file(GLOB_RECURSE Task2_src
    "headers/*.h"
    "headers/*.hpp"
    "src/*.cpp"
    "main.cpp")

include_directories(headers)

add_executable(Task2 ${Task2_src})

target_precompile_headers(Task1 PUBLIC "headers/pch.hpp")