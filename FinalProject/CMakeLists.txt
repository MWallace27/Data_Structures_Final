#CMakeLists.txt

cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(FinalProject)

set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(BIN_DIR "${CMAKE_SOURCE_DIR}/out")

file(GLOB SOURCE_FILES "${SOURCE_DIR}/*.cpp")

find_package(SFML 2.5 COMPONENTS graphics window window system network audio REQUIRED)

set(EX_NAME "Data_Structure_Visualizer")
add_executable(${EX_NAME} main.cpp ${SOURCE_FILES})

target_include_directories(${EX_NAME} PUBLIC ${INCLUDE_DIR} ${SOURCE_DIR})
target_link_libraries(${EX_NAME} PUBLIC sfml-graphics sfml-window sfml-system)
