cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(widgets LANGUAGES CXX)

# ExternalProject base
set_property(DIRECTORY PROPERTY EP_BASE ${CMAKE_BINARY_DIR}/subprojects)

set(STAGED_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/stage)

add_subdirectory(thirdparty)

include(ExternalProject)
ExternalProject_Add(${PROJECT_NAME}_core
  DEPENDS
  wxWidgets_external
  SOURCE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  CMAKE_ARGS
  -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}

  -DwxWidgets_ROOT_DIR=${wxWidgets_ROOT_DIR}
  -DENV_WX_CONFIG=${ENV_WX_CONFIG}
  CMAKE_CACHE_ARGS
  -DCMAKE_PREFIX_PATH:PATH=${CMAKE_PREFIX_PATH}
  BUILD_ALWAYS
  1
  INSTALL_COMMAND
  ""
)

##
#file(GLOB_RECURSE src
#    "headers/*.h"
#    "headers/*.hpp"
#    "src/*.cpp"
#    "main.cpp")
#    
#add_executable(SVG ${src})
#    
#target_include_directories(SVG PUBLIC headers)
#target_include_directories(SVG PUBLIC /usr/local/include/wx-3.2)
#target_precompile_headers(SVG PUBLIC "headers/pch.hpp")
#
##target_compile_options(SVG PUBLIC "wx-config --cxxflags" "wx-config --libs")

#file(GLOB_RECURSE test_src
#    "test/headers/*.h"
#    "test/headers/*.hpp"
#    "test/Unit/*.cpp"
#    "test/main.test.cpp")
#
#add_executable(testSVG ${test_src})
#
#target_include_directories(testSVG PUBLIC headers)
#target_include_directories(testSVG PUBLIC /usr/local/include/wx-3.2)
#target_precompile_headers(testSVG PUBLIC "test/headers/pch.hpp")
#
##target_compile_options(testSVG PUBLIC "wx-config --cxxflags" "wx-config --libs")
