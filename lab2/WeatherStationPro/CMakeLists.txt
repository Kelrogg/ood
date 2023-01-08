file(GLOB_RECURSE WeatherStationPro_SRC
        "header/*.h"
        "header/*.hpp"
        "src/*.cpp"
        "main.cpp")

file(GLOB_RECURSE WeatherStationPro_tests
        "header/*.h"
        "header/*.hpp"
        "tests/*.cpp"
        "tests/*.h"
        "src/pch.cpp")

include_directories(header)

add_executable(Task5 ${WeatherStationPro_SRC})
add_executable(Task5Tests ${WeatherStationPro_tests})
