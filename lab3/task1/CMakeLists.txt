file(GLOB_RECURSE Task1_src
    "headers/*.h"
    "headers/*.hpp"
    "src/*.cpp"
    "main.cpp")

include_directories(headers)

add_executable(Task1 ${Task1_src})

target_precompile_headers(Task1 PUBLIC "headers/pch.hpp")