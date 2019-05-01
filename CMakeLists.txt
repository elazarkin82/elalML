cmake_minimum_required (VERSION 2.6)

project (ElalMachineLerningLib)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O2")

SET(
	LIB_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/src/ops/MathOps.cpp
)

SET(
	TESTER_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/testers/opsTester.cpp 
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(ElalMachineLerningLib STATIC ${LIB_SOURCES})

add_executable(opsTester ${TESTER_SOURCES})

target_link_libraries(opsTester pthread ElalMachineLerningLib)
