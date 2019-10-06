TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        context.cpp \
        expression.cpp \
        main.cpp \
        nonterminalexpression.cpp \
        termianlexpression.cpp

HEADERS += \
    context.h \
    expression.h \
    nonterminalexpression.h \
    termianlexpression.h
