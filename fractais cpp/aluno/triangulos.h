#ifndef TRIANGULOS_H
#define TRIANGULOS_H

#endif // TRIANGULOS_H

#include <lib/pen.h>

void triangulos(Pen &p, int tam){
    if(tam < 1){
        return;
    }
    for(int i = 0; i < 3; i++){
        p.walk(tam);
        p.right(120);
        triangulos(p, (tam/2));
    }
}
