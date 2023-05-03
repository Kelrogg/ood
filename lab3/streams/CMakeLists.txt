file(GLOB_RECURSE Task3_src
    "headers/*.h"
    "headers/*.hpp"
    "src/*.cpp"
    "main.cpp")

add_executable(Task3 ${Task3_src})
    
target_include_directories(Task3 PUBLIC headers)
target_precompile_headers(Task3 PUBLIC "headers/pch.hpp")