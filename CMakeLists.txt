cmake_minimum_required(VERSION 3.24)
project(Tarea1 C)

set(CMAKE_C_STANDARD 11)

add_executable(Tarea1 main.c genera_escena_casa.c genera_escena_casa.h)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)


include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
target_link_libraries(Tarea1 OpenGL::GL OpenGL::GLU GLUT::GLUT m)
