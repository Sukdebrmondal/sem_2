#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    strcpy(arr[0].name,"pikachu");
    arr[0].attack=45;
    arr[0].hp=49;
    arr[0].speed=100;
    arr[0].tier='s';

  
    strcpy(arr[1].name,"chaizard");
    arr[1].attack=459;
    arr[1].hp=409;
    arr[1].speed=1030;
    arr[1].tier='A';

    strcpy(arr[2].name,"mewtwo");
    arr[2].attack=435;
    arr[2].hp=4239;
    arr[2].speed=1030;
    arr[2].tier='p';

    for(int i=0;i<3;i++){
        printf("\nName: %s\n",arr[i].name);
        printf("Attack: %d\n",arr[i].attack);
        printf("Hp: %d\n",arr[i].hp);
        printf("Speed: %d\n",arr[i].speed);
        printf("Tier: %d\n",arr[i].tier);
    }

    return 0;    
    
}
