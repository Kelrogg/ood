cmake_minimum_required(VERSION 3.16)
project(lab7)

#set(BUILD_SHARED_LIBS ON)
find_package(SFML 2 COMPONENTS graphics window system REQUIRED)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE Task2_src "src/*.cpp" "src/main.cpp")
add_executable(Task2 ${Task2_src})
target_precompile_headers(Task2 PUBLIC "src/pch.hpp")
    
set(SFML_STATIC_LIBRARIES TRUE)
target_include_directories(Task2 PUBLIC src)
target_include_directories(Task2 PUBLIC ${SFML_INCLUDE_DIR})
target_link_libraries(Task2 ${SFML_LIBRARIES})
target_link_libraries(Task2 sfml-graphics sfml-window sfml-system) # isn`t the line above enough, SFML?!
