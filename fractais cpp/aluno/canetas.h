#ifndef CANETAS_H
#define CANETAS_H

#endif // CANETAS_H

#include <lib/pen.h>

#include <aluno/rotacao.h>
#include <aluno/arvore.h>
#include <aluno/gelo.h>
#include <aluno/trigo.h>
#include <aluno/circulos.h>
#include <aluno/triangulos.h>
#include <aluno/quadrados.h>
//#include <aluno/tapete.h>
#include <aluno/espiral.h>

void caneta_rotacao(){
    Pen p(600, 600);
    p.setXY(10, 10);
    p.setHeading(0);
    p.setSpeed(80);
    int tam = 600;

    rotacao(p, tam);

    p.wait();
}

void caneta_arvore(){
    Pen p(900, 700);
    p.setXY(450, 650);
    p.setHeading(90);
    p.setSpeed(80);
    int tam = 200;

    arvore(p, tam);

    p.wait();
}

void caneta_gelo(){
    Pen p(900, 700);
    p.setXY(450, 350);
    p.setHeading(270);
    p.setSpeed(300);
    int tam = 200;

    gelo(p, tam);

    p.wait();
}

void caneta_trigo(){
    Pen p(900, 700);
    p.setXY(450, 650);
    p.setHeading(90);
    p.setSpeed(1000);
    int tam = 400;

    trigo(p, tam);

    p.wait();
}

void caneta_circulos(){
    Pen p(600, 600);
    p.setXY(300, 300);
    p.setHeading(0);
    p.setSpeed(20);
    int tam = 200;

    circulo(p,tam);

    p.wait();
}

void caneta_triangulos(){
    Pen p(650, 600);
    p.setXY(25, 25);
    p.setHeading(0);
    p.setSpeed(200);
    int tam = 600;

    triangulos(p, tam);

    p.wait();
}

void caneta_quadrados(){
    Pen p(600, 600);
    p.setXY(300, 300);
    p.setHeading(0);
    p.setSpeed(80);
    int tam = 600;

    quadrados(p, tam);

    p.wait();
}

//void caneta_tapete(){
//    Pen p(700, 700);
//    p.setXY(0, 0);
//    p.setHeading(0);
//    p.setSpeed(30);
//    double tam = 700;

//    tapete(p, tam);

//    p.wait();
//}

void caneta_espiral(){
    Pen p(600, 600);
    p.setXY(300, 300);
    p.setHeading(0);
    p.setSpeed(200);
    int tam = 5;

    espiral(p, tam);

    p.wait();
}
