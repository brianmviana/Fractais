#ifndef TRIGO_H
#define TRIGO_H

#endif // TRIGO_H

#include <lib/pen.h>

void trigo(Pen &p, int tam){
    if(tam < 0.1){
        return;
    }

    int ang = 45;
    float div = 0.3;
    int volta = 0;
    int pontas = 4;

    for(int i = 0; i < pontas; i++){
        volta = (((tam/pontas)*i));

        //LADO ESQUERDO
        p.walk(tam);
        p.walk(-volta);
        p.left(ang);
        trigo(p,tam*div);
        p.left(-ang);
        p.walk(-(tam - volta));

        //LADO DIRETO
        p.walk(tam);
        p.walk(-volta);
        p.right(ang);
        trigo(p,tam*div);
        p.right(-ang);
        p.walk(-(tam - volta));
    }
}
