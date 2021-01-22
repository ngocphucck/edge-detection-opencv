cmake_minimum_required(VERSION 3.19)
project(edge_detection)

set(OpenCV_DIR C:/opencv/install/x64/mingw/lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILE detect.cpp utils.cpp utils.h)
add_executable(edgeDetection ${SOURCE_FILE})

# OpenCV libs
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(edgeDetection ${OpenCV_LIBS})