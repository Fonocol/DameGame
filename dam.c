#include "header.h"



void afficherDamier(GameInfo gameinfo) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Alterner les couleurs en fonction de la somme des indices
            if ((i + j) % 2 == 0) {
                  // Case de couleur claire avec caractère noir
                if (gameinfo.Dame[i][j]==ROUGE)
                {
                    printf("\033[47m\033[32m o ");
                }else if (gameinfo.Dame[i][j]==VERT)
                {
                    printf("\033[47m\033[31m o ");
                }else if (gameinfo.Dame[i][j]==VIDE)
                {
                    printf("\033[47m   ");
                }
                 
            } else {
                printf("\033[40m   ");  // Case de couleur sombre avec caractère blanc
            }
        }
        printf("\033[0m\n"); // Réinitialiser la couleur après chaque ligne
    }
}

void init(GameInfo *gameinfo){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            gameinfo->Dame[i][j] = VIDE;
        }
    }

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if ((i + j ) % 2 == 0 && i<4) {
                gameinfo->Dame[i][j] = VERT;
            }else if ((i + j ) % 2 == 0 && i>5)
            {
                gameinfo->Dame[i][j] = ROUGE;
            }
            
        }
    }
    
}




