file(GLOB_RECURSE WeatherStationDuo_SRC
        "header/*.h"
        "header/*.hpp"
        "src/*.cpp"
        "main.cpp")

file(GLOB_RECURSE WeatherStationDuo_tests
        "header/*.h"
        "header/*.hpp"
        "tests/*.cpp"
        "tests/*.h"
        "src/pch.cpp")

include_directories(header)
#include_directories(../../repos/boost_1_80_0)

add_executable(Task4 ${WeatherStationDuo_SRC})
add_executable(Task4Tests ${WeatherStationDuo_tests})
