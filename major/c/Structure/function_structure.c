#include<stdio.h>
#include<string.h>
#include<stdbool.h>
  typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[24];
    }pokemon;

    // void fun(pokemon p){
    //     printf("%d",p.hp);
    // }
    void change(pokemon p){
        p.attack=646;
        p.hp=654;
    }
    int main(){
 
    pokemon pikachu ;
    pikachu.hp=85;
    pikachu.attack=452;
    change(pikachu);
    //printf("the hp is:%d",pikachu.hp);
    fun(pikachu);
    printf("%d\n",pikachu.attack); 
    printf("%d\n",pikachu.hp);

    return 0;

    
}
//structure are pass by value