cmake_minimum_required(VERSION 3.16)

project(lyn VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(lyn src/main.cpp)

find_package(Curses REQUIRED)
target_link_libraries(lyn PRIVATE ${CURSES_LIBRARIES})

target_include_directories(lyn PRIVATE ${CURSES_INCLUDE_DIR})

