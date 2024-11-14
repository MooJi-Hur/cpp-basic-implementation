cmake_minimum_required(VERSION 3.30)
project(cpp-basic-implementation)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Find all folders that contain main.cpp in problem-set directory
file(GLOB_RECURSE PROBLEMS_MAIN_FILES "problem-set/*/main.cpp")

# Iterate over each main.cpp file to create an executable
foreach(MAIN_FILE ${PROBLEMS_MAIN_FILES})
    # Extract the directory name from the path to use as the target name
    get_filename_component(PROBLEMS_DIR ${MAIN_FILE} DIRECTORY)
    get_filename_component(PROBLEMS_NAME ${PROBLEMS_DIR} NAME)

    # Gather all .cpp files within the directory
    file(GLOB PROBLEMS_SRC_FILES "${PROBLEMS_DIR}/*.cpp")

    # Create an executable for each problem
    add_executable(${PROBLEMS_NAME} ${PROBLEMS_SRC_FILES})

    # Set output directory for the executable
    set_target_properties(${PROBLEMS_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/${PROBLEMS_NAME})
endforeach()
