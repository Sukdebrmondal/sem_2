#include<stdio.h>
// int gcd(int a,int b){
//     if(a == 0){
//         return b;
//     }
//     else{
//         gcd(b%a,a);
//     }
// }
// int main(){
//     printf("%d",gcd(20,15));
// }


// int x_to_the_pow_y(int x,int y){
//     if(y == 0){
//         return 1;
//     }
//     else{
//         return x*x_to_the_pow_y(x,y-1);
//     }
// }

// int main(){
//     printf("%d",x_to_the_pow_y(5,5));
// }

// int fibb(int a){
//     if(a == 1)
//         return 0;
//     else if(a == 2)
//         return 1;
//     else
//         return fibb(a-1)+fibb(a-2);
// }
// int main(){
//     printf("%d",fibb(10));
// }


// int fact(int a){
//     if (a == 0 || a == 1)
//         return 1;
//     else
//         return a*fact(a-1);
// }
// int main(){
//     printf("%d",fact(5));
// }

// void t(int d,char a,char c,char b){
//     if(d>0){
//         t(d-1,a,b,c);
//         printf("%d , %c to %c\n",d,a,c);
//         t(d-1,b,c,a);
//     }
// }
// int main(){
//     t(3,'a','c','b');
// }

#define len 5
int stack[len];
int front = -1;
int rear = -1;
int isfull();
int isempty();
void enqueue(int a);
void display();
void dequeue();

int main(){
    int ch,n;
    while(1){
        scanf("%d",&ch);
        if(ch == 1){
            scanf("%d",&n);
            enqueue(n);
        }
        else if(ch == 2){
            dequeue();
        }
    }
}
int isfull(){ // this will change
    if((front == (rear+1)%len)||(front = 0 && rear == len-1)){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(rear == -1 || front == -1){
        return 1;
    }

    else{
        return 0;
    }
}
void enqueue(int a){
    if(isfull() != 1){
        if(rear == -1 && front == -1){
            rear = 0;front = 0;
        }
        else{
            rear = (rear+1)%len;
        }
        stack[rear] = a;
    }
    else{
        printf("full\n");
    }
    display();

}
void display(){
    for(int i = 0;i< len;i++){ // change 10 to rear
        printf("%d ",stack[i]);
    }
    printf("\n");
    printf("%d %d",front,rear);
    printf("\n");
}

void dequeue(){
    if(isempty()!=1){
        front = (front+1)%len;
    }
    else if()
    else{
        printf("empty\n");
    }
    display();
}
