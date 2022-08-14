cmake_minimum_required (VERSION 3.8)



find_package(OpenGL REQUIRED)
link_directories(${CMAKE_SOURCE_DIR}/GLTest/lib)

add_executable (GLTest "GLTest.cpp" "GLTest.h" "gl/glut.h")
target_link_libraries(GLTest OpenGL::GL)
include_directories(GLTest "./gl")

add_custom_command(TARGET GLTest POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
      ${CMAKE_SOURCE_DIR}/GLTest/bin
      ${CMAKE_BINARY_DIR}/GLTest)
