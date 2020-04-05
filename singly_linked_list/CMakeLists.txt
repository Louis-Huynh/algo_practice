cmake_minimum_required(VERSION 3.0.0)
project(linkey VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES
    src/singly_linked.cpp
    src/main.cpp
)

add_executable(linkey ${SOURCES})

target_include_directories(linkey
PRIVATE ${PROJECT_SOURCE_DIR}/include

)