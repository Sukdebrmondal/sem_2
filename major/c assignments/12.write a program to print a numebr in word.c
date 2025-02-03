// Write a program to print a number in word.

#include<stdio.h>
void num_to_word(int a)
{
    char *one_units[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    char *two_one_units[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    char *two_units[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};


    if(a<10)
    {
        printf("%s",one_units[a]);
    }
    else if(a<100)
    {
        if(a>=10 && a<20)
        {
            printf("%s",two_one_units[a-10]);
        }
        else
        {
            int sec_unit = a/10;    
            printf("%s ",two_units[sec_unit]);
            int rem = a%10;
                if(rem!=0)
                {
                    printf("%s",one_units[rem]);
                }
        }
    }
    else if(a<1000)
    {
        int thr_unit = a/100;
        printf("%s hundred ",one_units[thr_unit]);
        int rem = a%100;
            if(rem!=0)
            {
                if(rem>=10 && rem<20)
                {
                    printf("%s ",two_one_units[rem-10]);
                }
                else
                {
                    int sec_unit = rem/10;    
                    printf("%s ",two_units[sec_unit]);
                    int rem_2 = rem%10;
                    if(rem_2!=0)
                    {
                        printf("%s ",one_units[rem_2]);
                    }
                }
            }
            
    }
    else if(a<10000)
    {
        int four_unit = a/1000;
        printf("%s thousand ",one_units[four_unit]);
        int rem = a%1000;
            if(rem != 0)
            {
                int thr_unit = rem/100;
                printf("%s hundred ",one_units[thr_unit]);
                int rem_2 = rem%100;
                    if(rem_2!=0)
                    {
                        if(rem_2>=10 && rem_2<20)
                        {
                            printf("%s ",two_one_units[rem_2-10]);
                        }
                        else
                        {
                            int sec_unit = rem_2/10;    
                            printf("%s ",two_units[sec_unit]);
                            int rem_3 = rem_2%10;
                            if(rem_3!=0)
                            {
                                printf("%s ",one_units[rem_3]);
                            }
                        }
                    }
                    
            }
            
    }
    else if(a<100000)
    {  
        int lst_unit = a/1000;
        if(lst_unit>=10 && lst_unit<20)
        {
            printf("%s",two_one_units[lst_unit-10]);
        }
        else
        {
            int sec_unit = lst_unit/10;    
            printf("%s ",two_units[sec_unit]);
            int rem = lst_unit%10;
                if(rem!=0)
                {
                    printf("%s",one_units[rem]);
                }
        }
        printf(" thousand ");
        int rem = a%1000;
            if(rem != 0)
            {
                int thr_unit = rem/100;
                printf("%s hundred ",one_units[thr_unit]);
                int rem_2 = rem%100;
                    if(rem_2!=0)
                    {
                        if(rem_2>=10 && rem_2<20)
                        {
                            printf("%s ",two_one_units[rem_2-10]);
                        }
                        else
                        {
                            int sec_unit = rem_2/10;    
                            printf("%s ",two_units[sec_unit]);
                            int rem_3 = rem_2%10;
                            if(rem_3!=0)
                            {
                                printf("%s ",one_units[rem_3]);
                            }
                        }
                    }
                    
            }

    }
}


int main()
{
    int a;
    printf("enter a number between(0-100000): ");
    scanf("%d",&a);
    num_to_word(a);
}