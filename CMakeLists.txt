cmake_minimum_required(VERSION 3.2)

project(APhysicsDemo)

set(SOURCES
    "src/main.c"
)

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(vendor/raylib)

target_link_libraries(${PROJECT_NAME} PRIVATE
    raylib
)
