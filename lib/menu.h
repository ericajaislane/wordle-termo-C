
#ifndef MENU_H
#define MENU_H

#include "lib.h"

typedef enum { // enum para definir o modo de jogo
    LINEAR,
    PROCEDURAL,
} modo_t;


typedef struct Jogador {
    char name[50];
    int pontos;
    short lvlAtual;
    modo_t modo;
} jogador_t;




void displayMenu(jogador_t *jogador, bool *estado);




#endif //MENU_H
