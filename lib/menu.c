

#include "menu.h"
#include "lib.h"





void displayMenu(jogador_t *jogador, bool *estado) {
    printf("\n\n\n");

    colorir(COR_ROXO);
    printf(" _____ ___ ___ __ __ ___ \n");
    printf(" |_ _| __ | _  \\ \\/ |/ _ \\ \n");
    printf("  | | | _|| /  |\\/| | (_) |\n");
    printf("  |_| |___|_|_ \\_| |_|\\___/ \n");
    colorir(COR_BRANCO);

    printf("\n\n\n");

    printf(" 1. INICIAR\n");

    printf(" 2. ESTATÍSTICAS\n");

    printf(" 3. PROCEDURAL\n");

    printf(" 4. SAIR\n");

    switch(getTecladoJogador()) {
        case '1':
            system("cls");

        colorir(COR_ROXO);
        printf(" _____ ___ ___ __ __ ___ \n");
        printf(" |_ _| __ | _  \\ \\/ |/ _ \\ \n");
        printf("  | | | _|| /  |\\/| | (_) |\n");
        printf("  |_| |___|_|_ \\_| |_|\\___/ \n");
        colorir(COR_BRANCO);

        break;

        case '2':
        /*    FILE *stats = fopen("stats.txt", "r");
        if (stats == NULL) {
            printf("Erro na abertura do arquivo stats.txt\n");
        }*/


        case '3':
            jogador->modo = PROCEDURAL;

            break;

        case '4':
        system("cls");
        fflush(stdout);
        if(!continuarJogo(estado)) {
            Sleep(1000);
            *estado = false;

        } else {
            displayMenu(jogador, estado);
        }

        break;


        default:
            displayMenu(jogador, estado);
    }


};