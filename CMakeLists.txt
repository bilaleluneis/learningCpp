cmake_minimum_required(VERSION 3.13)

# Enable Caching to speed up compilation
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

project(learningCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")
set(CMAKE_VERBOSE_MAKEFILE ON)

# includes
set(INCLUDES
        include/crtp.h
        include/decltype.h
        include/type_traits.h
        include/exceptions.h
        include/array.h
        include/returntype.h)

# sources
set(SOURCES
        src/crtp.cpp
        src/decltype.cpp)

# unit tests
set(TESTS
        test/tests_runner.cpp
        test/crtp_test.cpp
        test/point_test.cpp
        test/array_test.cpp)

find_package(Boost 1.67 REQUIRED COMPONENTS unit_test_framework)

# target to build unit tests as executable
enable_testing()
add_executable(learningCppTests ${TESTS} ${SOURCES} ${INCLUDES})
target_include_directories(learningCppTests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(learningCppTests Boost::unit_test_framework)
target_compile_definitions(learningCppTests PRIVATE BOOST_TEST_DYN_LINK)
