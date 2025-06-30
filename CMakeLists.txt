cmake_minimum_required(VERSION 3.10)
project(FileHandlerProtei)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR})

set(SOURCES
    FileHandler.cpp
    functions.cpp
    main.cpp
)

set(HEADERS
    FileHandler.h
    functions.h
)

add_executable(FileHandlerProtei ${SOURCES} ${HEADERS})