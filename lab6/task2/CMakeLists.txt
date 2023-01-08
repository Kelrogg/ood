file(GLOB_RECURSE Task2_src
    "headers/*.h"
    "headers/*.hpp"
    "src/*.cpp"
    "main.cpp")
    
add_executable(Task2 ${Task2_src})

target_include_directories(Task2 PUBLIC headers)
target_precompile_headers(Task2 PUBLIC "headers/pch.hpp")

file(GLOB_RECURSE Task2_test_src
    "test/headers/*.h"
    "test/headers/*.hpp"
    "test/src/*.cpp"
    "test/unit/*.cpp"
    "test/main.test.cpp")

add_executable(Task2_test ${Task2_test_src})
##################################################################################
target_include_directories(Task2_test PUBLIC "/usr/local/include")
##################################################################################

target_include_directories(Task2_test PUBLIC headers)
target_precompile_headers(Task2_test PUBLIC "test/headers/pch.hpp" 
                                    PUBLIC "headers/pch.hpp")
