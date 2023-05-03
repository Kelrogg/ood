cmake_minimum_required(VERSION 3.17)
find_package(Boost COMPONENTS program_options REQUIRED )

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE Task3_test_src
    "../streams/src/*.cpp"
    "unit/pch.cpp"
    "unit/*.test.cpp"
    #"unit/FileExists.test.cpp"
    #"unit/FileInputStream.test.cpp"
    "main.test.cpp")

add_executable(Task3_test ${Task3_test_src})

#target_link_libraries(Task3_test LINK_PUBLIC ${Boost_LIBRARIES})
target_include_directories(Task3_test PUBLIC "../streams/headers"
                            PUBLIC ${Boost_INCLUDE_DIR})

target_precompile_headers(Task3_test PUBLIC "../streams/headers/pch.hpp")