
android {
    manifest.source = android-build
    manifest.target = .
    COPYFOLDERS = manifest
    include(qmake/copyData.pri)
    copyData()

    QT += androidextras
    SOURCES += \
        sialanjavalayer.cpp

    HEADERS += \
        sialanjavalayer.h
}

SOURCES += \
    sialandevices.cpp

HEADERS += \
    sialandevices.h
