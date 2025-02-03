/*
struct employee{
    int emp_id;
    char name;
    float salary;
};
*/

// Structure is a user defined data type

/*
Structure declaration-->1
#include<stdio.h>
int main(){
    struct pokeman{
        int hp;      //attribute
        int speed;
        int attack; //we use attribute using dot(.)operator
        char tier;
    };
    struct pokeman pikachu; // user defined data type
    pikachu.hp=50;
    pikachu.attack=80;
    pikachu.speed= 100;
    pikachu.tier='A';
    printf("pikachu attack is: %d\n",pikachu.attack);
   // printf("\n");

    struct pokeman chairzard;
    chairzard.hp=70;
    chairzard.attack=90;
    chairzard.speed=150;
    chairzard.tier='S';
    printf("chairzard attack is: %d\n",chairzard.attack);
   // printf("\n");

    struct pokeman newtwo;
    newtwo.hp=70;
    newtwo.attack=90;
    newtwo.speed=150;
    newtwo.tier='G';
    printf("newtwo attack is: %d",newtwo.attack);

    return 0;    
}
*/

//Structure declaration-->2
#include<stdio.h>
int main(){
    struct pokeman{
        int hp;      //attribute
        int speed;
        int attack; //we use attribute using dot(.)operator
        char tier;
    } pikachu,chairzard,newtwo;
    
    pikachu.hp=50;
    pikachu.attack=80;
    pikachu.speed= 100;
    pikachu.tier='A';
    printf("pikachu attack is: %d\n",pikachu.attack);
   // printf("\n");

   
    chairzard.hp=70;
    chairzard.attack=90;
    chairzard.speed=150;
    chairzard.tier='S';
    printf("chairzard attack is: %d\n",chairzard.attack);
   // printf("\n");

   
    newtwo.hp=70;
    newtwo.attack=90;
    newtwo.speed=150;
    newtwo.tier='G';
    printf("newtwo attack is: %d",newtwo.attack);

    return 0;
    
    
}