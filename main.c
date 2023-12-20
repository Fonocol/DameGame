#include "header.h"





int main() {
    GameInfo gameinfo;
    int matrice[SIZE][SIZE];  // Taille du damier, ici 10x10
    init(&gameinfo);
    afficherDamier(gameinfo);

    return 0;
}