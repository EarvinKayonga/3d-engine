cmake_minimum_required(VERSION 3.5)
project(3d_engine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Person/person.cpp
    src/Vector/vector.cpp
    src/main.cpp)

add_executable(3d_engine ${SOURCE_FILES})
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")