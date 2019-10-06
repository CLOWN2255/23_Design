TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        chiken.cpp \
        command.cpp \
        main.cpp \
        master.cpp \
        mutton.cpp \
        waiter.cpp

HEADERS += \
    chiken.h \
    command.h \
    master.h \
    mutton.h \
    waiter.h
