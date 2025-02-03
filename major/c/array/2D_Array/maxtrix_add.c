#include<stdio.h>
int main(){
    //create first maxtric
    
    printf("Create the first maxtric:\n ");
    
    int a;
    printf("Enter the row of the first maxtric: \n");
    scanf("%d",&a);
    int b;
    printf("Enter the coloum of the first maxtric: \n");
    scanf("%d",&b);
    //arrry address locked
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // array print
    printf("\n");
    printf("first matrix is \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    // second maxtric
    printf("Create the second maxtric:\n ");

    printf("Enter the row of the second maxtric: \n");
    scanf("%d",&a);

    printf("Enter the coloum of the second maxtric: \n");
    scanf("%d",&b);

    //array address locaked

    int brr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    // print maxtric
    printf("\n");
    printf("second matrix is \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",brr[i][j]) ;
        }
        printf("\n");
    }



    // add two maxtric
    int res[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            res[i][j]= arr[i][j]+brr[i][j];
        }
    }
    // print added two maxtric
    printf("The addition of the Two maxtric is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%3d",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;   
     
}
    
/*
#include<stdio.h>
int main(){
    //create first maxtric
    
    printf("Create the first maxtric:\n ");
    
    int a;
    printf("Enter the row of the first maxtric: \n");
    scanf("%d",&a);
    int b;
    printf("Enter the coloum of the first maxtric: \n");
    scanf("%d",&b);
    //arrry address locked
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // array print
    printf("\n");
    printf("first matrix is \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    // second maxtric
    printf("Create the second maxtric:\n ");

    printf("Enter the row of the second maxtric: \n");
    scanf("%d",&a);

    printf("Enter the coloum of the second maxtric: \n");
    scanf("%d",&b);

    //array address locaked

    int brr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    // print maxtric
    printf("\n");
    printf("second matrix is \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",brr[i][j]) ;
        }
        printf("\n");
    }



    // add two maxtric
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr[i][j]+=brr[i][j];
        }
    }
    // print added two maxtric
    printf("The addition of the Two maxtric is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;   
     
}
    
   
        
        
*/
   
        
        