TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        component.cpp \
        composite.cpp \
        leaf1.cpp \
        leaf1_1.cpp \
        main.cpp

HEADERS += \
    component.h \
    composite.h \
    leaf1.h \
    leaf1_1.h
