#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        char name[50];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokeman;
    typedef struct legendarypokemon{
        pokeman normal;
        char ability[100];
    }legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.attack=500;
    mewtwo.normal.hp=120;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.speed=800;
    mewtwo.normal.tier='s';

    printf("%S\n",mewtwo.normal.hp);


    
    


    return 0;
}
