cmake_minimum_required(VERSION 3.13)
project(chess-game VERSION 0.0.1
  DESCRIPTION "Learn C++"
  LANGUAGES CXX)

file(GLOB_RECURSE SRC_FILES src/*.cxx)

add_executable(chess-game ${SRC_FILES})
set_target_properties(chess-game PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
target_include_directories(chess-game PRIVATE include/chess-game)
