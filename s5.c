#include<stdio.h>
// #include<string.h>
#include<stdlib.h>
int strcompare(char str1[],char str2[]){
    int i=0,n;
    while (str1[i]!='\0'||str2[i]!=0)
    {
        if (str1[i]>str2[i])
        {
            return 1;
        }
        else if (str1[i]<str2[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}
int main()
{
    char str1[20],str2[10];
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    int n=strcompare(str1,str2);
    if (n==0)
    {
        printf("The strings are equal.");
    }
    else if (n>0)
    {
        printf("First string is greater than first string.");
    }
    else
    {
        printf("Second string is greater than first string.");
    }
    return 0;
}