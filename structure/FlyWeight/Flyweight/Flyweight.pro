TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        flyweight.cpp \
        flyweight1.cpp \
        flyweight2.cpp \
        flyweightfactory.cpp \
        main.cpp

HEADERS += \
    flyweight.h \
    flyweight1.h \
    flyweight2.h \
    flyweightfactory.h
