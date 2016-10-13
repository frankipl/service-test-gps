TEMPLATE = lib
TARGET = service
CONFIG += dll
QT += core
QT += remoteobjects
QT += androidextras
QT += positioning

SOURCES += \
    main.cpp \
    service-service.cpp \
    service.cpp \
    gps.cpp

REPC_SOURCE += ../service.rep

HEADERS += \
    service-service.h \
    service.h \
    gps.h
