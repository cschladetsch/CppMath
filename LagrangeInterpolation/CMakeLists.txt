cmake_minimum_required(VERSION 3.6)
project(LagrangeInterpolation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        lagrange_interp_nd.cpp
        lagrange_interp_nd.hpp
        lagrange_interp_nd_prb.cpp)

#add_executable(LagrangeInterpolation ${SOURCE_FILES})
add_library(LagrangeInterpolation_Plugin SHARED ${SOURCE_FILES})
