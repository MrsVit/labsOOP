project(lab1_v14)
cmake_minimum_required(VERSION 3.14)

add_library(task src/task.cpp src/task.h)

add_executable(lab1_v14_exe src/main_lab1.cpp)
target_link_libraries(lab1_v14_exe PRIVATE task)  
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.15.0
    TLS_VERIFY     false
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(lab1_v14_tests test/tests01.cpp)
target_link_libraries(lab1_v14_tests PRIVATE task gtest_main)  

add_test(NAME MyProjectTests COMMAND lab1_v14_tests)