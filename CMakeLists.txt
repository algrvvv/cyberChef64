# CMakeList.txt: проект CMake для utility01; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("utility01")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (utility01 "utility01.cpp" "utility01.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET utility01 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
