/*Create a structure 'persion'having attributes as age
and weight.Access its structure variable using pointer*/

// #include<stdio.h>
// int main(){
//     typedef struct persion{
//         int age;
//         float weight;
//     }persion;
//     persion sukdeb;
//     //intput
//     printf("Enter the age: ");
//     scanf("%d",&sukdeb.age);
//     printf("Enter the Weight: ");
//     scanf("%f",&sukdeb.weight);
//     //output
//     printf("The age is:%d\n",sukdeb.age);
//     printf("The weight is: %f\n",sukdeb.weight);
//     //pointer
//     persion*x=&sukdeb;
//     //address
//     printf("The Aaddress of age is:%p\n",&sukdeb.age);
//     printf("The Aaddress of weight is: %p\n",&sukdeb.weight);
//     //value
//     printf("The Aaddress value of age is:%d\n",*&sukdeb.age);
//     printf("The Aaddress value of weight is: %f\n",*&sukdeb.weight);
//     return 0;    
// }

// (*x).something=x->something
/*
#include<stdio.h>
int main(){
    typedef struct persion{
        int age;
        float weight;
    }persion;
    persion sukdeb;
    persion*x=&sukdeb;
    //intput
    printf("Enter the age: ");
    scanf("%d",&sukdeb.age);
    printf("Enter the Weight: ");
    scanf("%f",&sukdeb.weight);
    // //address
    printf("The Aaddress of age is:%p\n",&sukdeb.age);
    printf("The Aaddress of weight is: %p\n",&sukdeb.weight);

    // // //output
    printf("The age is:%d\n",(*x).age);
    printf("The weight is: %f\n",(*x).weight);
    return 0;    
}

*/
//new initialize structure
#include<stdio.h>
typedef struct presion{
    int age;
    float weight;
}persion;
int main(){
   persion sukdeb={25,52.5};
   printf("%d\n",sukdeb.age);
   printf("%f\n",sukdeb.weight);
   return 0;
}

