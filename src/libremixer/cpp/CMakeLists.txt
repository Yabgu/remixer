cmake_minimum_required(VERSION 2.8)
project(libremixer)
target_sources(${PROJECT_NAME}
    PRIVATE
        filter.cpp
)

set(public_headers
    include/filter.hpp
)

set(Boost_USE_STATIC_LIBS ON) 
set(Boost_USE_DEBUG_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME ON)
find_package(Boost 1.66.0 COMPONENTS rationals) 

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
endif()
