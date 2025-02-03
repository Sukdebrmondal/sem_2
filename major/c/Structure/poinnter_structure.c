#include<stdio.h>
typedef struct pokeman{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
}pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp=65;
    pikachu.speed=150;
    pikachu.attack=85;
    pikachu.tier='s';

    pokemon*x = &pikachu;
    printf("pikachu address->%p\n",x);
    printf("pikachu hp address->%p\n",&pikachu.hp);
    printf("pikachu speed address->%p\n",&pikachu.speed);
    printf("pikachu attack address->%p\n",&pikachu.attack);
    printf("pikachu tier address->%p",&pikachu.tier);
   // printf("pikachu  name address->%p",&pikachu.name);

    return 0;
}
    