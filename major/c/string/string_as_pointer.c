// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]=("Sukdeb Mondal");
//     char* ptr = str;
//     int i=0;
//     while((*ptr)!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//         i++;
//     }

//     return 0;
    
// }

/*
We get another way of initialising string 
i-> char str[]="physics Wallah";
ii->char *ptr = "physics wallah";(character pointer can 
also be used to store address of a string)

NOTE:-
Such direct initialisation using pointer results in a
read-only memory arrays and hence, causes undifined behaviour
when we try to change the individual characters.
ptr[0]='m'-> error 

*/
// char *ptr=("college wallah");
// printf("%s",ptr);
// return 0;
// }

//NOTE :-> c:\Users\sukde\Pictures\Screenshots\Screenshot (10).png

/*
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";   -> error
    str="physics wallah";
    printf("%s",str);
    return 0;
}




#include<stdio.h>
#include<string.h>
int main(){
    char *ptr="college wallah";//--> physics wallah
    ptr="physics wallah";
    printf("%s",ptr);
    return 0;
}



#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";
    char *ptr= str;
    ptr = " physics wallah";

    printf("%s",str);  //college wallah 
    printf("\n");   
    printf("%s",ptr);  // physics wallah
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";//--> physics wallah
    char *p= str;
    *p =  'p';

    printf("%s",str);
    
    return 0;
}