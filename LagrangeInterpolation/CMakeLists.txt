cmake_minimum_required(VERSION 3.6)
project(LagrangeInterpolation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        lagrange_interp_nd.cpp
        lagrange_interp_nd.hpp
        lagrange_interp_nd_prb.cpp)

set(TARGET_PATH ~/Local/Boids/Assets/Plugins)

set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(CMAKE_SHARED_LIBRARY_SUFFIX ".bundle")
set(LIBRARY_OUTPUT_PATH ${TARGET_PATH})

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

