cmake_minimum_required(VERSION 3.13)
project(learningCpp)
add_subdirectory("${PROJECT_SOURCE_DIR}/c++17" "${PROJECT_SOURCE_DIR}/c++17/cmake-build-debug")
add_subdirectory("${PROJECT_SOURCE_DIR}/c++20" "${PROJECT_SOURCE_DIR}/c++20/cmake-build-debug")

