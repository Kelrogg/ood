file(GLOB_RECURSE Task1_src
    "headers/*.h"
    "headers/*.hpp"
    "src/*.cpp"
    "main.cpp")
    
add_executable(Task1 ${Task1_src})

target_include_directories(Task1 PUBLIC headers)
target_precompile_headers(Task1 PUBLIC "headers/pch.hpp")

file(GLOB_RECURSE Task1_test_src
    "test/headers/*.h"
    "test/headers/*.hpp"
    "test/src/*.cpp"
    "test/unit/*.cpp"
    "test/main.test.cpp")

add_executable(Task1_test ${Task1_test_src})
##################################################################################
target_include_directories(Task1_test PUBLIC "/usr/local/include")
##################################################################################

target_include_directories(Task1_test PUBLIC headers)
target_precompile_headers(Task1_test PUBLIC "test/headers/pch.hpp" 
                                    PUBLIC "headers/pch.hpp")
