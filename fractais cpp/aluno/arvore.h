#ifndef ARVORE_H
#define ARVORE_H

#endif // ARVORE_H

#include <lib/pen.h>


void arvore(Pen &p, int tam){
    if(tam < 10){
        return;
    }

    int ang = 45;
    float div = 0.7;
    if(tam<20){
        p.setColor(0,255,0);
    }else{
        p.setColor(255,255,255);
    }
    p.walk(tam);
    p.left(ang);
    arvore(p,tam * div);
    p.left(-ang);
    arvore(p, tam * div);
    p.right(ang);
    arvore(p, tam * div);
    p.right(-ang);
    if(tam<20){
        p.setColor(0,255,0);
    }else{
        p.setColor(255,255,255);
    }

    p.walk(-tam);

}
