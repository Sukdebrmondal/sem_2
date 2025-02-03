#include<stdio.h>
int main(){
    struct pokeman{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokeman pikachu; // user defined data type
    printf("Enter the attack of the pikachu: ");
    scanf("%d",& pikachu.attack);

    printf("Enter the Hp of the pikachu: ");
    scanf("%d",& pikachu.hp);

    printf("Enter the Speed of the pikachu: ");
    scanf("%d",& pikachu.speed);

    // pikachu.hp=50;
    // pikachu.attack=80;
    // pikachu.speed= 100;
    // pikachu.tier='A';
    printf("pikachu attack is: %d\n",pikachu.attack);
    printf("pikachu hp is: %d\n",pikachu.hp);
    printf("pikachu Speed is: %d\n",pikachu.speed);
  
    return 0;
    
    
}




/*
In a structure elements are stored in a
coontinous memory location 
*/