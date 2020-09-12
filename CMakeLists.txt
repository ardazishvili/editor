cmake_minimum_required(VERSION 3.16)
set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
project(Editor)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
add_subdirectory(fig)

link_directories(fig/cbuild)
add_executable(editor
  QtWindow.h
  QtWindow.cpp
  editor.cpp
  EditorApplication.h
  EditorApplication.cpp
  globals.h
  globals.cpp
  WorldLayer.h
  WorldLayer.cpp
  EditorEventManager.h
  EditorEventManager.cpp
  mainwindow.h
  mainwindow.cpp
  QtOpenGLWindow.h
  QtOpenGLWindow.cpp
  events/EditorEventFabric.h
  events/EditorEventFabric.cpp
  events/EditorKeyReleaseEvent.h
  events/EditorKeyReleaseEvent.cpp
  events/EditorKeyPressEvent.h
  events/EditorKeyPressEvent.cpp
  events/EditorKeyRepeatEvent.h
  events/EditorKeyRepeatEvent.cpp
  events/EditorMouseMoveEvent.h
  events/EditorMouseMoveEvent.cpp
  events/EditorMousePressEvent.h
  events/EditorMousePressEvent.cpp
  events/EditorMouseReleaseEvent.h
  events/EditorMouseReleaseEvent.cpp
  )
target_link_libraries(editor PRIVATE spdlog::spdlog fig dl GL assimp pthread Qt5::Widgets)
