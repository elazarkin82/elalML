cmake_minimum_required (VERSION 2.6)

project (ElalMachineLerningLib)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O2")

file(GLOB_RECURSE LIB_SOURCES src/*.cpp)

SET(
	TESTER_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/testers/opsTester.cpp 
)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

#message(STATUS "print_all_variables------------------------------------------{")
#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
#message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()

message(STATUS "LIB_SOURCES=${LIB_SOURCES}")

add_library(ElalMachineLerningLib STATIC ${LIB_SOURCES})

add_executable(opsTester ${TESTER_SOURCES})

target_link_libraries(opsTester pthread ElalMachineLerningLib)
