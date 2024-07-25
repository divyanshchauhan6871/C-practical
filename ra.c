#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=8;
    int * ptra=&a;
    int ** pptra=&ptra;
    printf("Address of a is %d.\n",&a);
    printf("Address of a is %d.\n",ptra);
    printf("Address of a is %d.\n",*pptra);
    // printf("Address of pointer to variable a is %d.\n",&ptra);
    // printf("Address of pointer to variable a is %d.\n",pptra);
    printf("Value of a is %d.\n",a);
    printf("Value of a is %d.\n",*ptra);
    printf("Value of a is %d.\n",**pptra);
    return 0;
}