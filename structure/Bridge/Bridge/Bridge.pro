TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstraction.cpp \
        bridge.cpp \
        bridge1.cpp \
        bridge2.cpp \
        main.cpp \
        refineabstraction.cpp

HEADERS += \
    abstraction.h \
    bridge.h \
    bridge1.h \
    bridge2.h \
    refineabstraction.h
