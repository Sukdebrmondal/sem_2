#include<stdio.h>
int main(){
    typedef struct pokeman{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[24];
    }pokeman;
    pokeman a,b,c;
    a.attack=100;
    a.hp=98;
    a.speed=9835;
    a.tier='s';
    
    printf("enter the name of the pokemon: " );
    scanf("%99[^\n]%*c",a.name);
    b=a;
    c=a;//deep copy
    b.hp=86;

    printf("%s\n",c.name);
    
    printf("%d\n",a.hp);
    
    printf("%d\n",b.hp);
    printf("%d\n",c.hp);
    return 0;

}