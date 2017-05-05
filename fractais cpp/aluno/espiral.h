#ifndef ESPIRALQUADRADOS_H
#define ESPIRALQUADRADOS_H

#endif // ESPIRALQUADRADOS_H

#include <lib/pen.h>

void desenhar_quadrados(Pen &p, int tam){
    for(int i = 0; i < 4; i++){
        p.right(90);
        p.walk(tam * 0.4);
    }
}
void espiral(Pen &p, int tam){
    if(tam > 400){
        return;
    }
    int ang = 60;
    p.left(ang);
    p.jump(tam * 0.8);
    int angulo = p.getHeading();
    p.setHeading(0);
    desenhar_quadrados(p,tam);
    p.setHeading(angulo);
    espiral(p, tam + (tam * 0.3));
}
