#include<stdio.h>
void Tower_of_Hanoi(int n, char S,char H,char D){
    if(n==0) return;
    if(n==1){
        printf("%c-> %c\n",S,D);
        return;
    }
    Tower_of_Hanoi(n-1,S,D,H);
    printf("%c-> %c\n",S,D);
    Tower_of_Hanoi(n-1,H,S,D);

}
int main(){
    int n;
    printf("Enter the disk: ");
    scanf("%d",&n);
    Tower_of_Hanoi(n,'S','H','D');
    return 0;
}