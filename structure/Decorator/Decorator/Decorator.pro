TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        component.cpp \
        createcomponent.cpp \
        createdecorator.cpp \
        decorator.cpp \
        main.cpp

HEADERS += \
    component.h \
    createcomponent.h \
    createdecorator.h \
    decorator.h
