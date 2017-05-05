#ifndef QUADRADOS_H
#define QUADRADOS_H

#endif // QUADRADOS_H

#include <lib/pen.h>

void quadrados(Pen &p, double tam){
    if(tam < 10){
        return;
    }
    double n = 4.5;
    p.left(180);
    p.jump(tam/n);
    p.left(-90);
    p.jump(tam/n);
    p.left(-90);

    for(int i = 0; i < 4; i++){
        p.walk(tam/(n/2.0));
        p.right(90);
        quadrados(p,tam/(n/2.0));
    }

    p.right(90);
    //p.setColor(0,255,0);
    p.jump(tam/n);
    p.left(90);
    p.jump(tam/n);
}
