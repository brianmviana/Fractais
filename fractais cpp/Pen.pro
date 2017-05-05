TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += \
    lib/pen.cpp \
    lib/cpen.cpp \
    aluno/main.cpp \
    aluno/testes.cpp \

HEADERS += \
    lib/cpen.h \
    lib/sfLine.h \
    lib/pen.h \
    aluno/arvore.h \
    aluno/gelo.h \
    aluno/canetas.h \
    aluno/circulos.h \
    aluno/rotacao.h \
    aluno/trigo.h \
    aluno/triangulos.h \
    aluno/quadrados.h \
    aluno/tapete.h \
    aluno/espiral.h




#Linux
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio


#Windows
#LIBS += -LC:/SFML/lib

#CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
#CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

INCLUDEPATH += C:/SFML/include
DEPENDPATH += C:/SFML/include

