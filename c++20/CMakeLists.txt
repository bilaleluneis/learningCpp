cmake_minimum_required(VERSION 3.13)

# Enable Caching to speed up compilation
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

project(C++20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(Boost COMPONENTS unit_test_framework)

enable_testing()


# Cconcepts with Collection example
set(CONCEPTS_SRC    concepts/test.cpp
                    concepts/list.hpp
                    concepts/stack.hpp
                    concepts/constraints.h)




foreach(example CONCEPTS)
    add_executable(${example} ${${example}_SRC})
    target_include_directories(${example} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    target_link_libraries(${example} Boost::unit_test_framework)
    target_compile_definitions(${example} PRIVATE BOOST_TEST_DYN_LINK)
endforeach()