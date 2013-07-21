TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11
CONFIG+=c++11

SOURCES += main.cpp \
    consttest.cpp

HEADERS += \
    consttest.h

