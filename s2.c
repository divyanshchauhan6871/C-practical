#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int lengthOfString(char str[]){
    int i=0;
    while ((str[i])!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str1[30];
    printf("Enter your name : ");
    gets(str1);
    int i=lengthOfString(str1);
    printf("The length of string is : %d.\n",i);
    printf("The size of string is : %d.",i+1);
    return 0;
}