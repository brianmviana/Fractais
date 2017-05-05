#ifndef CIRCULOS_H
#define CIRCULOS_H

#endif // CIRCULOS_H

#include <lib/pen.h>

void circulo(Pen &p, int tam){
    if (tam < 1){
        return;
    }
    int qtd = 6;
    int angulo = 360 / qtd;
    p.circle(tam);
    for(int i = 0; i < qtd; i++){
        p.right(angulo);
        p.jump(tam);
        circulo(p,tam * 0.3);
        p.jump(-(tam));

    }
}
