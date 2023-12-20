#include <stdio.h>

#define SIZE 10

enum{
    VIDE,
    ROUGE,
    VERT,
    Dame_Rouge,
    Dame_verte,
};

typedef struct Player{
    char name[15];
    int points;
}Player;

typedef struct GameInfo{
    int Dame[SIZE][SIZE];
    Player Player1;
    Player Player2;
}GameInfo;




void init(GameInfo *gameinfo);
void afficherDamier(GameInfo gameinfo);