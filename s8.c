#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[20],str2[10];
    printf("Enter your first name : ");
    gets(str1);
    printf("Enter your surname : ");
    gets(str2);
    int p=strlen(str1);
    int q=strlen(str2);
    for (int i=0;*(str2+i)!=0;i++)
    {
       *(str1+i+p)=*(str2+i);
    }
    *(str1+p+q)='\0';
    printf("Your full name is : %s",str1);
    return 0;
}