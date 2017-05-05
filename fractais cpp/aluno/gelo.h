#ifndef GELO_H
#define GELO_H

#endif // GELO_H

#include <lib/pen.h>

void gelo(Pen &p, int tam){
    if(tam < 1){
        return;
    }
    int n = 5;
    int ang = (360/n);
    float div = 0.3;
    for(int i = 0; i < n; i++){
        p.walk(tam);
        gelo(p, tam * div);
        p.walk(-tam);
        p.left(ang);
    }
}


