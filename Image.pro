TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        BMP.cpp \
        BMP_Read.cpp \
        BMP_Write.cpp \
        Image.cpp \
        ImageFile.cpp \
        main.cpp

HEADERS += \
    BMP.h \
    Image.h \
    ImageFile.h
