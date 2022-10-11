file(GLOB_RECURSE strategy_functional_SRC
        "*.h"
        "*.cpp")

add_executable(strategy_functional ${strategy_functional_SRC})

include_directories(include)

add_library(pch_strategy_func INTERFACE include/pch.h)

target_precompile_headers(pch_strategy_func INTERFACE include/pch.h)