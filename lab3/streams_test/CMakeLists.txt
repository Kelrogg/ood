file(GLOB_RECURSE Task3_test_src
    "unit/*.cpp"
    "main.test.cpp")
    
add_executable(Task3_test ${Task3_test_src})
    
target_include_directories(Task3_test PUBLIC "../streams/headers")
#target_precompile_headers(Task3_test PUBLIC "../streams/headers/pch.hpp")
target_precompile_headers(Task3_test PUBLIC "headers/pch.hpp")