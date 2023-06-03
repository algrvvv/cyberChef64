# CMakeList.txt: проект CMake для utility01; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("utility01")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/getopt/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/base64_cpp-master/)

set(SRC_FILES utility01.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/getopt/getopt.c
  ${CMAKE_CURRENT_SOURCE_DIR}/getopt/getopt_long.c
  ${CMAKE_CURRENT_SOURCE_DIR}/base64_cpp-master/base64.cpp)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (utility01 ${SRC_FILES})

add_library(mylib utility01.cpp)
target_link_libraries(utility01 PRIVATE mylib)


