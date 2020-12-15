
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(Mobil2an)

# Add source files
file(GLOB_RECURSE SOURCE_FILES 
	${CMAKE_SOURCE_DIR}/src/*.c
	${CMAKE_SOURCE_DIR}/src/*.cpp)
	
# Add header files
file(GLOB_RECURSE HEADER_FILES 
	${CMAKE_SOURCE_DIR}/src/*.h
	${CMAKE_SOURCE_DIR}/src/*.hpp)

# Define the executable
add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

# GLUT
set(openGL -lglut -lGLU -lGL)


# Define the link libraries
target_link_libraries(${PROJECT_NAME} ${openGL})
