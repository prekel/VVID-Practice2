include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread

HEADERS += \
    Variant29Tests.h \
    Variant30Tests.h

SOURCES += \
    main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../VVID-Practice2_Lib/release/ -lVVID-Practice2_Lib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../VVID-Practice2_Lib/debug/ -lVVID-Practice2_Lib
else:unix: LIBS += -L$$OUT_PWD/../VVID-Practice2_Lib/ -lVVID-Practice2_Lib

INCLUDEPATH += $$PWD/../VVID-Practice2_Lib
DEPENDPATH += $$PWD/../VVID-Practice2_Lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../VVID-Practice2_Lib/release/libVVID-Practice2_Lib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../VVID-Practice2_Lib/debug/libVVID-Practice2_Lib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../VVID-Practice2_Lib/release/VVID-Practice2_Lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../VVID-Practice2_Lib/debug/VVID-Practice2_Lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../VVID-Practice2_Lib/libVVID-Practice2_Lib.a
