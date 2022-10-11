file(GLOB_RECURSE WeatherStation3_SRC
        "header/*.h"
        "header/*.hpp"
        "src/*.cpp"
        "main.cpp")

file(GLOB_RECURSE WeatherStation3_tests
        "header/*.h"
        "header/*.hpp"
        "tests/*.cpp"
        "tests/*.h"
        "src/pch.cpp")

include_directories(header)
#include_directories(../../repos/boost_1_80_0)

add_executable(Task3 ${WeatherStation3_SRC})
add_executable(Task3Tests ${WeatherStation3_tests})
