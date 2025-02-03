#include<stdio.h>
typedef union  pokemon{
    int hp; 
    int speed;
}pokemon;
int main(){
    pokemon pika;
    pika.hp=90;
    pika.speed=150;
    printf("%d\n",pika.hp);
    printf("%d",pika.speed);
    return 0;

}

/*In the case of the union one menber can be used at a time*/