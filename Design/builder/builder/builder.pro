TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstractbuilder.cpp \
        builder.cpp \
        director.cpp \
        main.cpp \
        product.cpp

HEADERS += \
    abstractbuilder.h \
    builder.h \
    director.h \
    product.h
