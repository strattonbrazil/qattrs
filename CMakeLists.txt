cmake_minimum_required(VERSION 2.8)

# http://qt-project.org/quarterly/view/using_cmake_to_build_qt_projects

PROJECT(qattrs)
FIND_PACKAGE(Qt4 REQUIRED)

SET(qattrs_SOURCES test.cpp attribute_editor.cpp)
#SET(qattrs_HEADERS attribute_editor.h)

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

ADD_EXECUTABLE(test ${qattrs_SOURCES})
TARGET_LINK_LIBRARIES(test ${QT_LIBRARIES})