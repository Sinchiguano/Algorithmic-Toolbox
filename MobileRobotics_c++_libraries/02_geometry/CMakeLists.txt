PROJECT(2d_3d_geometry)
 
CMAKE_MINIMUM_REQUIRED(VERSION 2.4)
if(COMMAND cmake_policy)
cmake_policy(SET CMP0003 NEW) # Required by CMake 2.7+
endif(COMMAND cmake_policy)
 

# WARNING: Add all the MRPT libs used by your program: "gui", "obs", "slam",etc.
#FIND_PACKAGE( MRPT REQUIRED base) 
find_package(MRPT 1.5 REQUIRED)
# Declare the target (an executable)
ADD_EXECUTABLE(tmp 2d_3d_geometry.cpp)
TARGET_LINK_LIBRARIES(tmp ${MRPT_LIBS})
 
# Set optimized building:
IF(CMAKE_COMPILER_IS_GNUCXX AND NOT CMAKE_BUILD_TYPE MATCHES "Debug")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
ENDIF(CMAKE_COMPILER_IS_GNUCXX AND NOT CMAKE_BUILD_TYPE MATCHES "Debug")
