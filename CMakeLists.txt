cmake_minimum_required(VERSION 3.13)

# Enable Caching to speed up compilation
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

project(learningCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(Boost COMPONENTS unit_test_framework)

enable_testing()

# ------------------ C++ 17 ------------------

# Class Templates Type Deduction
set(CTTD_SRC c++17/cttd/test.cpp c++17/cttd/pair.hpp)

# Copy Constructable / Assignment
set(CC_SRC  c++17/copyconstruct/test.cpp
            c++17/copyconstruct/vector.cpp
            c++17/copyconstruct/vector.h)

# Move Constructable / Assignment
set(MC_SRC  c++17/moveconstruct/test.cpp
            c++17/moveconstruct/vector.cpp
            c++17/moveconstruct/vector.h)

# ------------------ C++ 17 ------------------

# ------------------ Data Structure ------------------
set(ARRAY_SRC   datastructure/array/test.cpp
                datastructure/array/array.hpp
                datastructure/indexable.h
                datastructure/iterable.h)
# ------------------ Data Structure ------------------


foreach(example MC CC CTTD ARRAY)
    add_executable(${example} ${${example}_SRC})
    target_include_directories(${example} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    target_link_libraries(${example} Boost::unit_test_framework)
    target_compile_definitions(${example} PRIVATE BOOST_TEST_DYN_LINK)
endforeach()