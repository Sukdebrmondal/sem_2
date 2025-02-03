//write a program to read content of a ".txt" file and copy the content of the said file into another ".txt" file.

#include<stdio.h>
int main()
{
    FILE * fp;
    FILE * fs;
    char ch;

    fp = fopen("new_1.txt","r");
    fs = fopen("new_2.txt","w");

    if (fp == NULL || fs == NULL)
        printf("file is not opend");

    while(1)
    {
        ch = fgetc(fp);

        if (ch == EOF)
            break;
        else
            fputc(ch,fs);
    }

    fclose(fp);fclose(fs);

}