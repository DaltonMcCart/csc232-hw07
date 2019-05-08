cmake_minimum_required(VERSION 3.12)
project(hw07)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out)
add_executable(hw07 hw07.cpp)
add_custom_command(TARGET hw07 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/input.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
add_custom_command(TARGET hw07 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/data.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
