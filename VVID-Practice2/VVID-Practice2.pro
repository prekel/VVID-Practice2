TEMPLATE = subdirs

SUBDIRS += \
    VVID-Practice2_Lib \
    VVID-Practice2_Tests

VVID-Practice2_Tests.depends = VVID-Practice2_Lib
