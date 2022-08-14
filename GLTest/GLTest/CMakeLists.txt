cmake_minimum_required (VERSION 3.8)

set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_SOURCE_DIR}/GLTest/rc/appicon.rc")

find_package(OpenGL REQUIRED)
link_directories(${CMAKE_SOURCE_DIR}/GLTest/lib)

add_executable (TestGLUT "include/GLTest.cpp" "include/GLTest.h" ${APP_ICON_RESOURCE_WINDOWS})
target_link_libraries(TestGLUT OpenGL::GL)
include_directories(TestGLUT "./include/gl")

add_custom_command(TARGET TestGLUT POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
      ${CMAKE_SOURCE_DIR}/GLTest/bin
      ${CMAKE_BINARY_DIR}/GLTest)