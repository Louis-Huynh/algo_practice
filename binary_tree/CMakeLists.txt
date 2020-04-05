cmake_minimum_required(VERSION 3.0.0)
project(testCmake VERSION 0.1.0)

include(CTest)
enable_testing()

# add_library(
#     say-hello   
#     hello.h
#     hello.cpp
# )

# add_executable(testCmake main.cpp)

# target_link_libraries(testCmake PRIVATE say-hello)
set(SOURCES
    src/hello.cpp
    src/binary_tree.cpp
    src/main.cpp
)

add_executable(testCmake ${SOURCES})

target_include_directories(testCmake
PRIVATE ${PROJECT_SOURCE_DIR}/include

)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
