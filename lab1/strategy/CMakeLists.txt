file(GLOB_RECURSE strategy_SRC
        "*.h"
        "*.cpp")

add_executable(strategy ${strategy_SRC})

include_directories(include)

add_library(pch_strategy INTERFACE include/pch.h)

target_precompile_headers(pch_strategy INTERFACE ${pch})