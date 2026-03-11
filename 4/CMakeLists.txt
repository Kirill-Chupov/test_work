cmake_minimum_required(VERSION 3.11)

project(four_task CXX)
set(CMAKE_CXX_STANDART 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

find_package(Boost 1.78.0 REQUIRED)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

add_executable(four_task
    src/main.cpp
    src/geometry.h
    src/geometry.cpp
)

target_link_libraries(four_task
    CONAN_PKG::boost
)