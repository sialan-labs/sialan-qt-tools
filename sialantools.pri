
android {
    manifest.source = android-build
    manifest.target = .
    COPYFOLDERS = manifest
    include(qmake/copyData.pri)
    copyData()

    QT += androidextras
    SOURCES += \
        sialantools/sialanjavalayer.cpp

    HEADERS += \
        sialantools/sialanjavalayer.h
}

SOURCES += \
    sialantools/sialandevices.cpp

HEADERS += \
    sialantools/sialandevices.h

