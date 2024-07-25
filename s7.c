#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter your name : ");
    gets(str1);
    for (int i=0;*(str1+i)!=0;i++)
    {
        *(str2+i)=*(str1+i);
    }
    str2[strlen(str1)]='\0';
    printf("The string copied is : %s",str2);
    return 0;
}