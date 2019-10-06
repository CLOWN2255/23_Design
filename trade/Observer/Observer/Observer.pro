TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concreteobserver.cpp \
        concretesubject.cpp \
        main.cpp \
        observer.cpp \
        subject.cpp

HEADERS += \
    concreteobserver.h \
    concretesubject.h \
    observer.h \
    subject.h
