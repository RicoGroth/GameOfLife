cmake_minimum_required(VERSION 3.16)
project(GameOfLife)
set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_executable(${CMAKE_PROJECT_NAME}
    ${SRC}/main.cpp
    ${SRC}/Game.cpp
    ${SRC}/TerminalView.cpp
    ${SRC}/OpenGLView.cpp
)
target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/include
)