// marze path-->0nly down ,right
#include<stdio.h>
int marze(int cr, int cc,int er, int ec){
    int rightways=0;
    int downways=0;
    //only rightways call
    if(cr==er && cc==ec) return 1;
    if (cr==er) {
        rightways+= marze(cr,cc+1,er,ec);
    }
    // only downways call
    if(cc==ec){
       downways += marze(cr+1,cc,er,ec); 
    }
    if(cr<er && cc<ec){
        rightways+= marze(cr,cc+1,er,ec);
        downways += marze(cr+1,cc,er,ec); 
    }
    int totalways= rightways + downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter the rows of the marze: ");
    scanf("%d",&n);
    int m;
    printf("Enter the coloums of the marze: ");
    scanf("%d",&m);
    int totalways=marze(1,1,n,m);
    printf("%d",totalways);
    return 0;
}