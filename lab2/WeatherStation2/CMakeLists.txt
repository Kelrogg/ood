file(GLOB_RECURSE WeatherStation2_SRC
        "header/*.h"
        "header/*.hpp"
        "src/*.cpp"
        "main.cpp")

file(GLOB_RECURSE WeatherStation2_tests
        "header/*.h"
        "header/*.hpp"
        "tests/*.cpp"
        "src/pch.cpp")

include_directories(header)
#include_directories(../../repos/boost_1_80_0)

add_executable(Task2 ${WeatherStation2_SRC})
add_executable(Task2Tests ${WeatherStation2_tests})
