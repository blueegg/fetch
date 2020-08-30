cmake_minimum_required(VERSION 3.14...3.18)

project(FetchExample LANGUAGES CXX)

find_package(yaml-cpp REQUIRED)

add_executable(fetch_example "")
target_link_libraries(fetch_example yaml-cpp)

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
    enable_testing()
    find_package(GTest REQUIRED)

    add_executable(test_fetch "")
    target_link_libraries(test_fetch PRIVATE gtest pthread)
    add_test(NAME test_fetch COMMAND test_fetch) # Command can be a target

endif()

add_subdirectory(src)
add_subdirectory(test)