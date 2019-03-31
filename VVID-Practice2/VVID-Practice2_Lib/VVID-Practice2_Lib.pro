QT       -= gui

TARGET = VVID-Practice2_Lib
TEMPLATE = lib
CONFIG += staticlib

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    Variant29.cpp \
    Variant30.cpp

HEADERS += \
    Variant29.h \
    Variant30.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
