TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        adaptee.cpp \
        adapter.cpp \
        main.cpp \
        target.cpp

HEADERS += \
    adaptee.h \
    adapter.h \
    target.h
