#include<stdio.h>
int main(){
    struct book{
        char name[50];
        float price;
        int pages;
    };
    
   //Java
    struct book java_book;   
    printf("Enter the Java Book name: ");
    scanf("%99[^n]%*c",java_book.name);
    printf("Enter the Java Book price: ");
    scanf("%f",&java_book.price);
    printf("Enter the java Book pages: ");
    scanf("%d",&java_book.pages);
    printf("\n");

    //Data_structure
  
    struct book data_structure_book;    
    printf("Enter the Data_structure Book name: ");
    scanf("\n%99[^\n]%*c",data_structure_book.name);
    printf("Enter the Java Book price: ");
    scanf("%f",&data_structure_book.price);
    printf("Enter the Data_structure Book pages: ");
    scanf("\n%d",&data_structure_book.pages);
    printf("\n");

  

    //print

    printf("\nBook Detalis:\n");
    //java
    printf("the java book name is:%s\n",java_book.name );
    printf("the java book price is:$%2f\n",java_book.price );
    printf("the java book page is:%d",java_book.pages );
    printf("\n");
    //Data_structure
    printf("the Data_structure book name is:%s\n",data_structure_book.name );
    printf("the Data_structure book price is:$%2f\n",data_structure_book.price );
    printf("the Data_structure book page is:%d",data_structure_book.pages );
    
    printf("\n");

    return 0;
}