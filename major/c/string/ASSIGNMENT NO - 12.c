//ASSIGNMENT NO - 12
//PROBLEM STATEMENT : Write a program to print a number in word.

//Source code:

#include <stdio.h>
void Number_in_Words(int num);
int main() 
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Number_in_Words(num);
    return 0;
}

void Number_in_Words(int num)
{

    char *below_20[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};


    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    if (num < 0 || num > 9999) 
    {

        printf("Invalid input. Please enter a number between 0 and 9999.\n");
        return;
    }
    int thousands = num / 1000;
    int hundreds = (num % 1000) / 100;
    int remaining = num % 100;
    if (thousands > 0)
    {

        printf("%s Thousand ", below_20[thousands]);
    }
    if (hundreds > 0)
    {

        printf("%s Hundred ", below_20[hundreds]);
    }

    if (remaining > 0)
    {
        if (remaining < 20) {
        printf("%s", below_20[remaining]);
    } 


    else
    {
        int tensDigit = remaining / 10;
        int onesDigit = remaining % 10;
        printf("%s", tens[tensDigit]);

        if (onesDigit > 0)
        {    
            printf(" %s", below_20[onesDigit]);
        }

    }

}   

    printf("\n");
}
