#ifndef ROTACAO_H
#define ROTACAO_H

#endif // ROTACAO_H

#include <lib/pen.h>

void rotacao(Pen &p, int tam){
    if(tam<0.5){
        return;
    }
    p.setColor(rand() % 255 ,rand() % 255 ,rand() % 255);
    p.walk(tam - 20);
    p.right(90);
    rotacao(p, tam - 10);
}
