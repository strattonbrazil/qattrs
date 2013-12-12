cmake_minimum_required(VERSION 2.8)

# http://qt-project.org/quarterly/view/using_cmake_to_build_qt_projects
set(CMAKE_AUTOMOC ON)

PROJECT(qattrs)
FIND_PACKAGE(Qt4 REQUIRED)
SET(QT_USE_QTSCRIPT TRUE)

SET(qattrs_SOURCES test.cpp attribute_editor.cpp bindable.cpp)
SET(qattrs_HEADERS bindable.h attribute_editor.h)

QT4_WRAP_CPP(qattrs_HEADERS_MOC ${qattrs_HEADERS})

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

ADD_EXECUTABLE(test ${qattrs_SOURCES} ${qattrs_HEADER_MOC})
TARGET_LINK_LIBRARIES(test ${QT_LIBRARIES})