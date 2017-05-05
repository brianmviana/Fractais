#include <lib/pen.h>
#include <aluno/canetas.h>
#include <iostream>

int main(){
    int op;
    op = 11;
    while (op != 0) {
        printf("0  -> Para Sair\n");
        printf("1  -> Fractal Arvore\n");
        printf("2  -> Fractal Circulos\n");
        printf("3  -> Fractal Dragao\n");
        printf("4  -> Fractal Espiral\n");
        printf("5  -> Fractal Gelo\n");
        printf("6  -> Fractal Quadrados\n");
        printf("7  -> Fractal Rotacao\n");
        printf("8  -> Fractal Tapete\n");
        printf("9  -> Fractal Triagulos\n");
        printf("10 -> Fractal Trigo\n");

        std::cin >> op;

        if(op == 1){
            caneta_arvore();
        } else if (op == 2) {
            caneta_circulos();
        } else if (op == 3) {
//                caneta_dragao();
        } else if (op == 4) {
            caneta_espiral();
        } else if (op == 5) {
            caneta_gelo();
        } else if (op == 6) {
            caneta_quadrados();
        } else if (op == 7) {
            caneta_rotacao();
        } else if (op == 8) {
            //caneta_tapete();
        } else if (op == 9) {
            caneta_triangulos();
        } else if (op == 10) {
            caneta_trigo();
        } else {
            op = 11;
        }
    }
    return 0;
}
